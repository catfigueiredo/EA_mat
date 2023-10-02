#include<stdio.h>
#include<math.h>
 int main()
   {
       int x;
       printf("Insira um valor inteiro: \n");
       scanf("%i",&x);

       if (x%2==0)
       {
           printf("O valor fornecido e par.");
       }
       else
       {
           printf("O valor fornecido e impar.");
       }
   }
