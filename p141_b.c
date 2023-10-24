#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Insira o numero que deseja exibir a tabuada tradicional: ");
    scanf("%i",&a);
    b=0;

    while (b<=10)
    {
        c=a*b;
        printf("\n%i x %i = %i\n",a,b,c);
        b=b+1;

    }


}
