#include <stdio.h>
#include <stdlib.h>

int main()
{
    char aluno[200][30];
    float n1[200], n2[200], media[200], gmed;
    int n,i,f,p;
    n=0;
    f=0;

    for(f=0; f<200; f++)
    {
        for(i=0; i<10; i++)
        {
            printf("\nDigite o nome:\n>>");
            fgets(aluno[i],30,stdin);
            printf("\nInsira a primeira nota:\n>>");
            scanf("%f", &n1[i]);
            fflush(stdin);
            printf("\nInsira a segunda nota:\n>>");
            scanf("%f", &n2[i]);
            fflush(stdin);
            media[i] = (n1[i] + n2[i])/2;

        }
        f++;
        i=0;

        printf("\n Prova FATEC - Americana - Linguagem de Programacao");
        printf("\n Nome do Aluno\t Nota1\t Nota2\t Media");

        for(i=0; i<10; i++)
        {
            printf("\n\t %s", aluno[i]);
            printf("\t\t %.2f", n1[i]);
            printf("\t %.2f", n2[i]);
            printf("\t %.2f", media[i]);

            gmed=media[i] + gmed;
        }
        gmed=gmed/10;
        printf("\n\n A media dos alunos igual a: %.2f\n\n", gmed);
        system("pause");
    }
    return 0;
}
