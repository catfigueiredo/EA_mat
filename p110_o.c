#include<stdio.h>
 int main()
  {
      int x,m;

      printf("Insira um valor inteiro: \n");
      scanf("%i",&x);

      m=x*2;

      if (m>30)
      {
          printf("Resultado da multiplicacao: %i", m);
      }
      else
      {
          printf("Nao ha valor a ser informado.");
      }
  }
