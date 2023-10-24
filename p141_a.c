#include<stdio.h>
int main()
{
    int a,c;
    a=15;
    printf("Os quadrados dos numeros inteiros existentes na faixa de valor de 15 a 200 sao: \n");

    while (a>=15&&a<=200)
    {
        c= a*a;
        printf("%i\n",c);
        a= a+1;

    }
}
