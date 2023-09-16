#include<stdio.h>
  int main ()
   {
       float V,D,T;

       printf("Insira a distancia em km:");
       scanf("%f",&D);
       printf("Insira o tempo em minutos:");
       scanf("%f",&T);

       V=(D*1000)/(T*60);

       printf("Velocidade= %.2f m/s", V);

       return 0;
   }
