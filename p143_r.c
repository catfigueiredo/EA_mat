#include<stdio.h>
 int main()
 {
  int a,b,c;
  b=0;
  c=0;
  printf("Insira valores inteiros (caso o valor inserido seja negativo, o maior e menor numero informados serao exibidos): \n");
  do
  {
  scanf("%i",&a);
  if(b<=a)
  {
  b=a;
  }
  if(c>=a)
  {
  c=a;
  }
  }
  while(a>=0);
  printf("Menor valor inserido: %i, maior valor inserido: %i",c,b);


 }
