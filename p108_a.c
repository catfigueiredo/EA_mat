#include<stdio.h>
 int main()
  {
      int a,b,c;
      printf("Insira um valor inteiro: \n");
      scanf("%i",&a);
      printf("Insira um segundo valor inteiro: \n");
      scanf("%i",&b);

      if (a>b)
      {
          c=a-b;
          printf("A diferenca do maior para o menor valor e de: %i", c);
      }
      else if (a<b)
      {
          c=b-a;
          printf("A diferenca do maior para o menor valor e de: %i", c);
      }
      else
      {
          printf("Nao ha diferenca.");
      }
  }
