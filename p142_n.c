#include<stdio.h>
 int main()
 {

     float a,c,x;
     c=0;
     x=0;
     do
     {
         printf("Insira um valor (caso tenha terminado, digite 0 para receber os resultados):");
         scanf("%f",&a);
         x=x+a;
         c=c+1;
     }
     while(a=0 || a>0);
        printf(" Somatorio= %.0f\n Media= %.2f\n Total de valores= %.0f", x,x/(c-1), c-1);
 }
