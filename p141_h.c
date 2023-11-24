#include<stdio.h>
 int main()
 {
   int B, E, a, b;
   printf("Insira o valor da base: ");
   scanf("%i", &B);
   printf("Insira o valor do expoente: ");
   scanf("%i", &E);
   a=1;
   b=1;
   while(a<=E)
   {
     b=b*B;
     a=a+1;
   }
   printf("Resultado: %i/ ", b);
 }
