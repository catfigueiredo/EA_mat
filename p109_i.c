#include<stdio.h>
 int main()
   {

    int A, B, C, D, E, maior, menor;

    printf("Insira 5 valores inteiros para descobrir o maior e o menor entre eles: \n");
    scanf("%i %i %i %i %i", &A, &B, &C, &D, &E);

    maior = A;
    menor = A;

    if(B>maior)
     {
       maior = B;
     }
    else if(B<menor)
     {
       menor = B;
     }
     if(C>maior)
     {
       maior = C;
     }
    else if(C<menor)
     {
       menor = C;
     }
    if(D>maior)
     {
       maior = D;
     }
    else if(D<menor)
     {
       menor = D;
     }
    if(E>maior)
     {
       maior = E;
     }
    else if(E<menor)
     {
       menor = E;
     }
       printf("Menor valor: %i \nMaior valor: %i", menor, maior);
    }

