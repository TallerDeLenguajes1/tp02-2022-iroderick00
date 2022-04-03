#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct compu{
    int velocidad;
    int anio;
    int cantidad;
    char *tipo_cpu[10];
}; typedef struct compu pc;

void lista(pc);
void pcvieja(pc);
void pcvelocidad(pc);
//(p+((aux-1)*10))
int main(){

    srand(time(NULL));
    char tipos[6][10]={"Intel","AMD","Celeron","Athlon","Core","Pentium"};
    pc maquinas[5];
    int k=0,marca;

    puts("Ingrese las caracteristicas de la pc");
    puts("Ingrese la velocidad de procesamiento");
    scanf("%d",&maquinas[k].velocidad);
    puts("Ingrese el anio");
    scanf("%d",&maquinas[k].anio);
    puts("Ingrese la cantidad de nucleos (entre 1 y 4)");
    scanf("%d",&maquinas[k].cantidad);
    puts("Elija la marca");
    puts("[0]Intel [1]AMD [2]Celeron [3]Athlon [4]Core [5]Pentium");
    scanf("%d",&marca);
    strcpy(maquinas[k].tipo_cpu,tipos[marca]);
    fflush(stdin);
    getchar();
}