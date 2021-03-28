#include<stdio.h>
#include<stdlib.h>

int main(void)
{
//nprod é o nome do produto
    char nprod[3][20];
    int estoque[3][5];
    int coluna[5];
    float preco;
    int i, j;

//Entrada de dados dos nomes e precos dos produtos
    for(i=0; i<3; i++)
    {
        printf("\nInforme o nome do produto[%d]:\n>>",i+1);
        fgets(nprod[i],20,stdin);


        /*printf("Informe o preco do produto:\n>>");
        scanf("%f", &preco);
        fflush(stdin);*/
    }

    for (i=0; i<3; i++)
    {
        printf("\nInforme a quatidade de produtos nos armazens:\n");
        for (j=0; j<5; j++)
        {
            scanf("%d", &estoque[i][j]);

        }
    }
//Soma do total de produtos de cada armazem
    for(j=0; j<5; j++)
    {
        for(i=0; i<3; i++)
        {
            coluna[j]+=estoque[i][j];
        }
    }
    for(i=0; i<5; i++)
    {
        printf("O total de itens armazenados no armazem %d: %d \n",i+1, coluna[i]);
    }
    return 0;
}
