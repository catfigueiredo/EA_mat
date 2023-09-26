#include<stdio.h>
 int main ()
   {
       float x,y,d;

       printf("Insira um valor:");
       scanf("%f", &x);

       printf("Insira um segundo valor:");
       scanf("%f", &y);

       d= x-y;
       if (d>=0)
       {
        printf("A diferenca e maior ou igual a zero.");
       }

       else if(d<0)
       {
           printf("A diferenca e menor que zero.");
       }
   }
