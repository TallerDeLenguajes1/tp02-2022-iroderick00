#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define cantidadPc 5

typedef struct pc{
    int velocidad;
    int anio;
    int cantidad;
    char tipo_cpu[10];//aca saque el puntero porque me daba error el strcpy
}pc;

void lista(pc computadoras[cantidadPc]);//como podria hacerla mas general?
void pcvieja(pc computadoras[cantidadPc]);
void pcvelocidad(pc computadoras[cantidadPc]);

int main()
{
    char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    pc computadoras[cantidadPc];
    int aux;
    srand(time(NULL));

    for (int i=0; i<cantidadPc; i++)
    {
        computadoras[i].velocidad=rand()%3+1;
        computadoras[i].cantidad=rand()%8+1;
        computadoras[i].anio=rand()%18+2000;
        aux=rand()%5+1;
        strcpy(computadoras[i].tipo_cpu,tipos[aux]);
    }
    printf("Lista de computadoras cargada. Presione una tecla para presentar la lista de computadoras");
    fflush(stdin);
    getchar();
    lista(computadoras);
    printf("Para ver la computadora mas vieja y la mas rapida presione una tecla");
    fflush(stdin);
    getchar();
    system("cls");
    pcvieja(computadoras);
    pcvelocidad(computadoras);
    fflush(stdin);
    getchar();
    return 0;
}

void lista(pc computadoras[cantidadPc]){

    printf(" ------------------ LISTADO DE PCS ------------------\n");
    for (int i=0; i<cantidadPc; i++)
    {
        printf("\t-----PC NUMERO %d-----\n", i+1);
        printf("Velocidad del procesador: %dGHz\n", computadoras[i].velocidad);
        printf("Cantidad de nucleos del procesador: %d\n", computadoras[i].cantidad);
        printf("Anio de fabricacion: %d\n", computadoras[i].anio);
        printf("Marca del procesador: %s\n", computadoras[i].tipo_cpu);
    }
}

void pcvieja(pc computadoras[cantidadPc]){

    int masVieja=9999, indice;
    for (int i = 0; i < cantidadPc; i++)
    {
        if (computadoras[i].anio<masVieja)
        {
            masVieja=computadoras[i].anio;
            indice=i;
        }
    }
        printf("\t-----PC MAS VIEJA-----\n");
        printf("Velocidad del procesador: %dGHz\n", computadoras[indice].velocidad);
        printf("Cantidad de nucleos del procesador: %d\n", computadoras[indice].cantidad);
        printf("Anio de fabricacion: %d\n", computadoras[indice].anio);
        printf("Marca del procesador: %s\n", computadoras[indice].tipo_cpu);
}

void pcvelocidad(pc computadoras[cantidadPc]){

    int masRapida=0, indice;
    for (int i = 0; i < cantidadPc; i++)
    {
        if (computadoras[i].velocidad>masRapida)
        {
            masRapida=computadoras[i].velocidad;
            indice=i;
        }
    }
        printf("\t-----PC MAS RAPIDA-----\n");
        printf("Velocidad del procesador: %dGHz\n", computadoras[indice].velocidad);
        printf("Cantidad de nucleos del procesador: %d\n", computadoras[indice].cantidad);
        printf("Anio de fabricacion: %d\n", computadoras[indice].anio);
        printf("Marca del procesador: %s\n", computadoras[indice].tipo_cpu);
}