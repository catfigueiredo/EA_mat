#include<stdio.h>
 int main()
 {
     int a,b,c,x,j;
     x=1;
     b=0;
     c=0;

     while(c<=14)
     {
         j=1;
         printf("Insira um valor inteiro:");
         scanf("%i",&x);
         a=x;
         do
         {

             x=x*j;
             j=j+1;
             printf("fatorial: %i \n",x);

         }
         while (j<=a-1);
        b=b+x;
        c=c+1;
     }
     printf("\nA soma dos fatoriais de todos os valores e de: %i\n",b);

 }
