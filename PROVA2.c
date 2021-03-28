#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int cont=1, t, i;
    char nome[20];

    printf("Digite seu nome:\n>>");
    scanf("%s", nome);
    t = strlen(nome);

    printf("\nAs letras nas posicoes impares sao:\n");

    while(cont<=t-1)
    {
        printf("[%d] = %c\n", cont, nome[cont]);
        cont=cont+2;
    }

    return 0;
}
