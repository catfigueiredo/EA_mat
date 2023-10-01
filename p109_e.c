#include<stdio.h>
 int main()
   {
       float a,b,c,delta;
       printf("Insira o valor de a: \n");
       scanf("%f",&a);
       printf("Insira o valor de b: \n");
       scanf("%f",&b);
       printf("Insira o valor de c: \n");
       scanf("%f",&c);

       if (a!=0&&b!=0&&c!=0)
       {
           delta=b*b-4*a*c;
            if (delta>0)
            {
                printf("Ha duas solucoes reais.");
            }
            else if (delta<0)
            {
                printf("Nao ha solucao real.");
            }
            else
            {
                printf("Ha apenas uma solucao real.");
            }
       }
       else
       {
           printf("Operacao invalida");
       }
   }
