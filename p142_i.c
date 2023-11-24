#include<stdio.h>
 int main()
 {
   int j, x, anterior, atual, proximo;
   x=1;
   anterior=0;
   atual=1;
   printf("Os 15 primeiros termos da sequencia de Fibonacci sao: \n");
   while(x<=15)
   {
     proximo=atual+anterior;
     printf("%i\n", proximo);
     anterior=atual;
     atual=proximo;
     x=x+1;
   }
 }
