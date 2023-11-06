#include<stdio.h>
 int main()
 {
     int a,b,c,x,j;
     x=1;
     b=0;
     c=0;
     j=1;

     while(c<=14)
     {

         printf("Insira um valor inteiro:");
         scanf("%i",&x);
         do
         {
             a=x*j;
             j=j+1;
         }
         while (j<=a);
        b=b+x;
        c=c+1;
     }
     printf("\nA soma dos fatoriais de todos os valores e de: %i\n",b);

 }
