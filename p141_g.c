#include<stdio.h>

int main()
{
   int a, b, x;
   a=1;
   b=3;
   x=1;
   while(a<=15)
   {
     x=x*b;
     a=a+1;
     printf("3 elevado a %i potencia: %i\n", a-1,x);
   }
}
