#include<stdio.h>
 int main()
  {
      char comodo[100],teste;
      float largura,comprimento,a,b=0;

      do
      {


        printf("Insira o nome do comodo:");
        scanf("%s",&comodo);
        printf("\nInsira a largura:");
        scanf("%f",&largura);
        printf("\nInsira o comprimento:");
        scanf("%f",&comprimento);

        a=largura*comprimento;
        b= b+a;
        printf("Area %s: %f",comodo,a);
        printf("\nDeseja inserir outro comodo(S/N):");
        scanf("%s",&teste);
      }
      while (teste=='S' || teste=='s');
      printf("Area total: %f",b);



  }
