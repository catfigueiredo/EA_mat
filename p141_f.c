#include<stdio.h>
 int main()
 {
   int a, c;
   a=1;
   printf("Valores numericos divisiveis por 4 e menores que 200:\n");
   while(a<200)
   {
     c=a%4;
     if(c==0)
     {
      printf("%i\n", a);
     }
     a=a+1;
   }
 }
