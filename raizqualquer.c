#include<stdio.h>
#include<math.h>
  int main ()
   {
       float B,I;
       double R;

       printf("Insira o valor da base: ");
       scanf("%f", &B);
       printf("Insira o valor do indice: ");
       scanf("%f", &I);

       R= pow(B,(1/I));

       printf("Raiz= %.2f", R);

   }
