#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 20

int main()
{
    // int *p;
    int vt[N];
    srand(time(NULL));
    // p=vt;
    
    // for(int i = 0;i<N; i++)
    // {
    //     *(p+i)=1+rand()%100;
    //     printf("%d\n", *(p+i));
    // }
    for(int i = 0;i<N; i++)
    {
        *(vt+i)=1+rand()%100;
        printf("%4d", *(vt+i));
    }
}
