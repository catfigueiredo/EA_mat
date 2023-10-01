#include<stdio.h>
 int main()
  {
      float N1,N2,N3,N4,NE,MD1,MD2;

      printf("Insira o valor da primeira nota: \n");
      scanf("%f",&N1);
      printf("Insira o valor da segunda nota: \n");
      scanf("%f",&N2);
      printf("Insira o valor da terceira nota: \n");
      scanf("%f",&N3);
      printf("Insira o valor da quarta nota: \n");
      scanf("%f",&N4);

      MD1=(N1+N2+N3+N4)/4;

      if (MD1>=7)
      {
          printf("Aprovado com media %.1f",MD1);
      }
      else
      {
          printf("Insira a nota de exame: \n");
          scanf("%f",&NE);
          MD2=(NE+MD1)/2;

          if (MD2>=5)
          {
            printf("Aprovado em exame com media %.1f",MD2);
          }
          else
          {
            printf("Reprovado em exame com media %.1f",MD2);
          }

      }
  }
