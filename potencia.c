#include<stdio.h>
#include<math.h>
  int main ()
   {
       int A,B;
       double C;

       printf("Insira o valor da base: ");
       scanf("%i", &A);
       printf("Insira o valor do expoente: ");
       scanf("%i", &B);

       C= pow(A,B);

       printf("Potencia= %.01f",C);

   }
