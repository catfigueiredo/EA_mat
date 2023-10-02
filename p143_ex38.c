#include<stdio.h>
#include<math.h>
 int main()
  {
      float n1,n2;
      float r;
      char O;

      printf("Insira a operacao desejada, já com os valores, (use '+' para mais, '-' para menos, '*' para multiplicacao e '/' para divisao): \n");
      scanf("%f",&n1);
      scanf("%c",&O);
      scanf("%f",&n2);

      switch (O)
      {
          case '+':
          r= n1+n2;
          printf("O resultado da soma e: %.1f", r);
          break;

          case '-':
          r= n1-n2;
          printf("O resultado da subtracao e: %.1f", r);
          break;

          case '*':
          r= n1*n2;
          printf("O resultado da multiplicacao e: %.1f", r);
          break;

          case '/':
          r= n1/n2;
          printf("O resultado da divisao e: %.1f", r);
          break;

          default:
            printf("Operacao invalida.");
      }

  }
