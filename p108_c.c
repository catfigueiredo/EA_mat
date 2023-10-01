#include<stdio.h>
 int main()
  {
      float N1,N2,N3,N4,MD;
      printf("Insira o valor da primeira nota: \n");
      scanf("%f",&N1);
      printf("Insira o valor da segunda nota: \n");
      scanf("%f",&N2);
      printf("Insira o valor da terceira nota: \n");
      scanf("%f",&N3);
      printf("Insira o valor da quarta nota: \n");
      scanf("%f",&N4);

      MD=(N1+N2+N3+N4)/4;

      if (MD>=5)
      {
          printf("Aprovado com media %.1f",MD);
      }
      else
      {
          printf("Reprovado com media %.1f",MD);
      }
  }
