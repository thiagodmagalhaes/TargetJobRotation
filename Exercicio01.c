#include<stdio.h>
#include<stdlib.h>


int main()
{
    int INDICE = 13, SOMA = 0, K;

    for(K=0; K<INDICE; K++)
    {
        K = K + 1;
        SOMA = SOMA + K;
    }
    printf("O resultado eh:  %d", SOMA);

    return 0;
}
