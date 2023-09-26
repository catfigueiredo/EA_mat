#include<stdio.h>

 int main ()
 {
     int x;
     printf("Insira a idade do usuario:\n");
     scanf("%i",&x);

     if(x>=18)
        {
        printf("O usuario e maior de idade. \n");
        }
    else if(x<18)
        {
        printf("O usuario e menor de idade. \n");
        }

 }

