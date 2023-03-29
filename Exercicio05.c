#include<stdio.h>
#include<stdlib.h>


int main()
{
    char str[30];
    int tam;
    printf("Digite uma palavra: ");
    scanf(" %s", &str);
    tam=strlen(str);

    for(int i=tam-1;i>=0;i--)
        printf("%c",str[i]);



    return 0;
}

