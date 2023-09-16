#include<stdio.h>
  int main ()
   {
       float A,B;
       float Q;

       printf("Insira um valor inteiro para A: \n");
       scanf("%i",&A);
       printf("Insira um valor inteiro para B: \n");
       scanf("%i",&B);

       Q=(A/B)*(A/B);

       printf("Quadrado da divisao entre A e B= %.2f", Q);

   }
