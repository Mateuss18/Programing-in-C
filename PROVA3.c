#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,i;

    printf("Informe a quantidades de numeros:\n>>");
    scanf("%d",&n);

    int nume[n],maior=0,menor=99999,par[n],impar,p=0,soma=0;

    for(i=0; i<n; i++)
    {
        printf("Informe um numero:\n>>");
        scanf("%d",&nume[i]);

        if (maior == 0)
        {
            maior = nume[i];
        }
        else
        {
            if(nume[i] >maior)
            {
                maior = nume[i];
            }
        }
        if( nume[i] < menor)
        {
            menor=nume[i];
        }
        if(nume[i] % 2)
        {
            impar = nume[i];
        }
        else
        {
            par[p]=nume[i];
            p++;
        }
        soma = soma+ impar;
        impar=0;

    }
    printf("\n Maior elemento: %d",maior);
    printf("\n Menor elemento: %d",menor);

    printf("\n Soma dos numeros impares:%d",soma);
    printf("\n Numeros pares:");

    for(i=0; i<p; i++)
    {
        printf(" %d\n",par[i]);
    }

    return 0;
}

