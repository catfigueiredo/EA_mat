#include<stdio.h>
 int main()
 {
    int A,B,C;
    printf("Insira o valor de A:");
    scanf("%i",&A);
    printf("Insira o valor de B:");
    scanf("%i",&B);
    C=A;
    A=B;
    B=C;
    printf("A:%i\n",A);
    printf("B:%i\n",B);

    return 0;
 }

