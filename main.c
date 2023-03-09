#include <stdio.h>
#include <stdlib.h>


// Exercicio: A copa do mundo e as olimpiadas ocorrem a cada 4 anos. Sendo que normalmente as olimpiadas acontecem
// nos anos que são multiplos de 4. Já a copa do mundo é realizada nos anos pares que não são multiplos de 4.
// Escreva um programa que solicita o ano ao usuario, e informa se é um ano de olimpiadas, copa do mundo, ou nenhum dos dois.

int main()
{
   int ano, anoCopa1, anoCopa2, anoOlimp;

   printf("\n Informe um ano: \n");
   scanf("%d", &ano);

   anoCopa1=ano%4;
   anoCopa2=ano%2;

   if(anoCopa1>0 && anoCopa2==0)
   {
       printf("\n O ano e de copa do mundo \n");
   }

   else
   {
       anoOlimp=ano%4;

       if(anoOlimp==0)
       {
           printf("\n O ano e de Olimpiada");
       }
       else
       {
            printf("\n O ano nao e copa nem olimpiada");
       }

   }
}
