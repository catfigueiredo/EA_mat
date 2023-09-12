#include<stdio.h>
  int main()
  {
      int a,b,c,d;
      printf("Insira o valor de A:\n");
      scanf("%i",&a);
      printf("Insira o valor de B:\n");
      scanf("%i",&b);
      c=a-b;
      d=c*c;
      printf("O quadrado da diferenca entre A e B= %i", d);

      return 0;
  }
