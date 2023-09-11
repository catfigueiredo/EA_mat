#include<stdio.h>

int main ()
{
    float t,v,d,l;
     printf("digite o tempo da viagem:\n");
     scanf("%f",&t);
     printf("digite a velocidade:\n");
     scanf("%f",&v);
     d=t*v;
     l=d/12;
     printf("velocidade:%.2f\n",v);
     printf("tempo da viagem:%.2f\n",t);
     printf("distancia percorrida:%.2f\n",d);
     printf("litros usados:%.2f\n",l);

}
