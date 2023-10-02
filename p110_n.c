#include<stdio.h>
 int main()
  {
      int A,B,C,soma;

      printf("Insira tres valores inteiros: \n");
      scanf("%i %i %i",&A,&B,&C);

      soma= A+B+C;

      if (soma>=100)
      {
          printf("Resultado da soma: %i", soma);
      }
      else
      {
          printf("Nao ha resultado a ser apresentado.");
      }
  }
