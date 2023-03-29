#include<stdio.h>
#include<stdlib.h>


int main()
{
    int caminhao = 80, carro = 110, dist = 100;
    float car , cam;
    car = (60*110)/100;
    cam = ((60*100)/80) +10;

    if(car>cam)
        printf("O carro chegara ao seu destino primeiro que o caminhao");
    else
        printf("O caminhao chegara ao seu destino primeiro que o carro");

    return 0;
}

