#include<stdio.h>
 int main()
  {
      int x;
      printf("Insira um valor numerico inteiro: \n");
      scanf("%i",&x);

      if (x>=1&&x<=9)
      {
          printf("O valor esta na faixa permitida.");
      }
      else
      {
          printf("O valor esta fora da faixa permitida.");
      }
  }
