#include<stdio.h>
 int main()
   {
       int n,p;
       printf("Insira um valor numerico inteiro: \n");
       scanf("%i",&n);

       if (n>=0)
       {
           printf("Esse valor positivo e igual a: %i", n);
       }
       else
       {
           p= n*(-1);
           printf("Esse valor positivo e igual a: %i", p);
       }

   }
