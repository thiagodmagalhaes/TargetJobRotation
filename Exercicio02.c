#include<stdio.h>
#include<stdlib.h>


int main()
{
    int num, a =0, b = 1, stop=0;

    printf("Digite o numero: ");
    scanf("%d", &num);

    while(a<num)
    {
        a = b;
        b = a+b;

        if(a==num)
        {
            a=a+num;
            stop=1;
        }
    }
    if(stop==1)
        printf("\nO numero pertence a serie de Fibonnaci");
    else
        printf("\n O numero nao pertence a serie de Fibonnaci");





    return 0;
}
