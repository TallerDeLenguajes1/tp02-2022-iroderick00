#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 20

int main(){

    int vt[N];
    srand(time(NULL));  

    for(int i = 0;i<N; i++)
    {
        vt[i]=1+rand()%100;
        printf("%4d", vt[i]);
    }
}