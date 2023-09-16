#include<stdio.h>
  int main()
   {
       float A,B,SO,SUB,M,D,SUB2,D2;

       printf("Insira o valor de A: ");
       scanf("%f", &A);
       printf("Insira o valor de B: ");
       scanf("%f", &B);

       SO=A+B;
       SUB=A-B;
       M=A*B;
       D=A/B;
       SUB2=B-A;
       D2=B/A;

       printf("Soma= %.1f \n", SO);
       printf("Subtracao (A-B)= %.1f \n", SUB);
       printf("Subtracao (B-A)= %.1f \n", SUB2);
       printf("Multiplicacao= %.1f \n", M);
       printf("Divisao (A/B)= %.1f \n", D);
       printf("Divisao (B/A)= %.1f \n", D2);

       return 0;





   }
