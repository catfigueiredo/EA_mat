#include<stdio.h>
 int main()
 {
    int x;

    printf("Insira um valor numerico inteiro: \n");
    scanf("%i", &x);

    if (!(x > 3)) // caso seja digitado um numero maior que 3, o algoritmo nao vai responder
        {
        printf("O valor digitado: %i", x);
        }
 }
