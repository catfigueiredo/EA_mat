#include<stdio.h>
 int main ()
 {
  float F,C;
  printf("digite a temperatura em Fahrenheit:");
  scanf("%f", &F);
  C =(F-32)*5/9;
  printf("temperatura em Celsius: %f",C);
 }
