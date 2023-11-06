#include<stdio.h>
 int main()
 {
     int c;
     float a,x,j;
     x=0;
     c=1;

     while (c<=10)
     {
         printf("Insira um valor real:");
         scanf("%f",&a);
         x=x+a;
         c=c+1;
     }
     j=x/10;
     printf("O somatorio dos valores e igual a %.1f e a media dos valores e de %.1f",x,j);
 }
