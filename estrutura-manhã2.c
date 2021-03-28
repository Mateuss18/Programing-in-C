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

  struct cad_aluno ALUNO;
  float media;
  int i;
  media=0;
printf("\n Cadastro de Alunos \n\n");
printf("\n Informe o nome ...\t");
fgets(ALUNO.nome,20,stdin);
for(i=0;i<4;i++)
{


printf("\n Informe a %d nota...:",i+1);
scanf("%f",&ALUNO.nota[i]);
media +=ALUNO.nota[i];
}
media = media/4;
printf("\n\n");

printf("\nNome .............\t  %s",ALUNO.nome);
for(i=0;i<4;i++)
{
  printf("\n Nota %d .............\t %.2f",i+1,ALUNO.nota[i]);
}
printf("\n A Media do aluno ..\t  %.2f", media);
}







