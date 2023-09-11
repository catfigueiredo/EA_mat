#include<stdio.h>
 float main ()
 {
     float p, v, ta, te;
     printf("Insira o valor:\n");
     scanf("%f",&v);
     printf("Insira a taxa:\n");
     scanf("%f",&ta);
     printf("Insira o tempo:\n");
     scanf("%f",&te);
     p=v+(v*(ta/100)*te);
     printf("O valor da prestacao e de:%.2f\n", p);
 }
