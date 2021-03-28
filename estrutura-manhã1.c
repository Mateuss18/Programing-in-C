#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main()
{
struct cad_aluno
{
  char nome[20];
  float nota1;
  float nota2;
  float nota3;
  float nota4;
};

  struct cad_aluno ALUNO;
  float media;
  media=0;
printf("\n Cadastro de Alunos \n\n");
printf("\n Informe o nome ...\t");
fgets(ALUNO.nome,20,stdin);

printf("\n Informe a primeira nota...:");scanf("%f",&ALUNO.nota1);
printf("\n Informe a segunda  nota...:");scanf("%f",&ALUNO.nota2);
printf("\n Informe a terceira nota...:");scanf("%f",&ALUNO.nota3);
printf("\n Informe a quarta   nota...:");scanf("%f",&ALUNO.nota4);

media = (ALUNO.nota1+ALUNO.nota2+ALUNO.nota3+ALUNO.nota4)/4;
printf("\n\n");

printf("\nNome .............\t  %s",ALUNO.nome);
printf("\nNota 1 .............\t  %.2f",ALUNO.nota1);
printf("\nNota 2 .............\t  %.2f",ALUNO.nota2);
printf("\nNota 3 .............\t  %.2f",ALUNO.nota3);
printf("\nNota 4 .............\t  %.2f",ALUNO.nota4);
printf("\n A Media do aluno ..\t  %.2f", media);
}







