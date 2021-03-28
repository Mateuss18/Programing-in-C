#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

int main()
{
    int i;
    float vends, nov, jan, dez, pgeral, p, media, maior;
    pgeral=0;
    p=0;
    media=0;
    maior=0;
    for (i=0; i<2; i++)
    {
        system("cls");
        printf("Informe as suas vendas no mes de Novembro:\n>>");
        scanf("%f", &nov);

        printf("\nInforme as suas vendas no mes de Dezembro:\n>>");
        scanf("%f", &dez);

        printf("\nInforme as suas vendas no mes de Janeiro:\n>>");
        scanf("%f", &jan);

        p=nov+dez+jan;
        pgeral=pgeral+p;
        media=pgeral/2;

        printf("\nA sua pontuacao geral foi de: %.2f \n", p);
        system("pause");

    if ( maior == 0)
    {
        maior = p;
    }
    else
    {
        if(p >maior)
        {
            maior = p;
        }
    }
}
    printf("\nA maior pontuacaoo atingida  entre todos os funcionarios  nos tres meses foi de: %.2f", maior);
    printf("\nA media da pontuacao geral de todos os funcionarios foi de: %.2f", media);
    printf("\nO total da pontuacao geral de todos os funcionarios foi de: %.2f", pgeral);

    return 0;
}
