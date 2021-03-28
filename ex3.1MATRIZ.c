#include<stdio.h>
#include<stdlib.h>

int main(void)
{

//nprod é o nome do produto
    char nprod[3][20];
    int i, j;
    int estoque[3][4];
    float preco[3];

//Entrada de dados dos nomes e precos dos produtos
    printf("\nInforme o nome dos 10 produtos:\n>>");
    for(i=0; i<3; i++)
    {
        fgets(nprod[i],20,stdin);
    }

    for (i=0; i<3; i++)
    {
        printf("Informe o preco do produto[%d]:\n>>", i+1);
        scanf("%f", &preco[i]);
        fflush(stdin);
    }

    for (i=0; i<3; i++)
    {
         printf("Informe a quatidade de %s nos armazem 5:\n",nprod[i]);
        for(j=0; j<4; j++)
        {
        scanf("%d", &estoque[i][j]);
        fflush(stdin);
        }
    }

    return 0;
}
