#include<stdio.h>
 int main()
 {
   float c, f;
   c=10;

   while(c<=100)
   {
     f=c*9/5+32;
     printf("Celsius: %.0f/ Fahrenheit: %.0f\n", c, f);
     c=c+10;
   }
 }
