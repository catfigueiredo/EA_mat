#include<stdio.h>
int main()
{
    int a,b;
    a=1;
    b=0;

    while (a<=100)
    {
    b=b+a;
    a= a+1;
    }
    printf("A soma dos cem primeiros numeros naturais e igual a: %i",b);
}
