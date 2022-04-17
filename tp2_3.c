#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define filas 5
#define columnas 7

int main()
{
    int *p;
    int mt[filas][columnas];
    srand(time(NULL));
    p=&mt[0][0];

    for(int i = 0;i<filas; i++)
    {
        for(int j = 0;j<columnas; j++)
        {
            *(p+i*columnas+j)=1+rand()%100;
            printf("%4d ",*(p+(i*columnas+j)));
        }
        printf("\n");
    }
}
