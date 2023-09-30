#include<stdio.h>
 int main ()
  {
      float x;

      printf("Insira um numero: \n");
      scanf("%f",&x);

      if (x==3)
      {
          printf("O numero e igual a tres.");
      }
      else if (x<3)
      {
          printf("O numero e menor que tres.");
      }
      else
      {
          printf("O numero e maior que tres.");
      }
  }
