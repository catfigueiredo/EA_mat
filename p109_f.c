#include<stdio.h>

int main ()
{
   int A, B, C;
   printf("Insira o valor de A: \n");
   scanf("%i", &A);
   printf("Insira o valor de B: \n");
   scanf("%i", &B);
   printf("Insira o valor de C: \n");
   scanf("%i", &C);

   if (A > B && B > C)
   {
     printf("Ordem crescente: %i < %i < %i", C, B, A);
   }


   else if (A > C && C > B)
   {
    printf("Ordem crescente: %i < %i < %i", B, C, A);
    }


      else if (B > A && A > C)
   {
    printf("Ordem crescente: %i < %i < %i", C, A, B);
    }


     else if (B > C && C > A)
   {
    printf("Ordem crescente: %i < %i < %i", A, C, B);
    }


     else if (C > A && A > B)
   {
    printf("Ordem crescente: %i < %i < %i", B, A, C);
    }


     else if (C > B && B > A)
   {
    printf("Ordem crescente: %i < %i < %i", A, B, C);
    }

     else if (A == C && C == B)
   {
    printf("Ordem crescente: %i = %i = %i", B, C, A);
    }

     else if (A == B && B > C)
   {
    printf("Ordem crescente: %i < %i = %i", C, A, B);
    }

     else if (C > A && A == B)
   {
    printf("Ordem crescente: %i = %i < %i", B, A, C);
    }

     else if (A == C && C > B)
   {
    printf("Ordem crescente: %i < %i = %i", B, C, A);
    }

     else if (B > C && C == A)
   {
    printf("Ordem crescente: %i = %i < %i", C, A, B);
    }

     else if (C == B && B > A)
   {
    printf("Ordem crescente: %i < %i = %i", A, B, C);
    }

    else if (A > B && B == C)
   {
    printf("Ordem crescente: %i = %i < %i", C, B, A);
    }
    else
    {
     printf("Operacao invalida");
    }

    }
