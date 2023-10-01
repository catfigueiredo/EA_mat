#include<stdio.h>
 int main ()
 {
     float d,x,t;

     printf("Insira o valor da compra: \n");
     scanf("%f",&x);
     printf("\nInsira o valor pago: \n");
     scanf("%f",&d);

     if (x==d)
     {
         printf("Troco nao necessario, valor pago exato.");
     }
     else if (x>d)
     {
         t=x-d;
         printf("Valor faltante: %.2f",t);
     }
     else
     {
         t=d-x;
         printf("Troco necessario: %.2f",t);
     }
 }

