#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main()
{
    struct cad_aluno
    {
        char nome[20];
        float nota[4];
    };

    struct cad_aluno ALUNO[3];
    float media;
    int i,j;
    media=0;
    printf("\n Cadastro de Alunos \n\n");
    for(j=0; j<3; j++)
    {
        printf("\n Informe o nome ...\t");
        fgets(ALUNO[j].nome,20,stdin);
        fflush(stdin);

        for(i=0; i<4; i++)
        {
            printf("\n Informe a %d nota...:",i+1);
            scanf("%f",&ALUNO[j].nota[i]);
            fflush(stdin);

        }
    }
    printf("\n\n");
    for(j=0; j<3; j++)
    {
        printf("\nNome .............\t  %s",ALUNO[j].nome);
        media=0;
        for(i=0; i<4; i++)
        {
            printf("\n Nota %d .............\t %.2f",i+1,ALUNO[j].nota[i]);
            media +=ALUNO[j].nota[i];

        }
        media=media/4;
        printf("\n A Media do aluno ..\t  %.2f", media);

    }

}







