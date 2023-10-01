#include<stdio.h>
 int main()
  {
      float l1,l2,l3;
      printf("Insira o valor do lado 1 do triangulo:");
      scanf("%f",&l1);
      printf("Insira o valor do lado 2 do triangulo:");
      scanf("%f",&l2);
      printf("Insira o valor do lado 3 do triangulo:");
      scanf("%f",&l3);

      if (l1+l2>l3&&l1+l3>l2&&l2+l3>l1)
      {

        if (l1==l2&&l1==l3)
        {
            printf("Triangulo equilatero.");
        }

        else if (l1==l2||l1==l3||l2==l3)
        {
            printf("Triangulo isosceles.");
        }
        else
        {
            printf("Triangulo escaleno");
        }
      }
      else
      {
          printf("Nao e um triangulo");
      }
  }
