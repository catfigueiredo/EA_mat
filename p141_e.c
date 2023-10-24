#include<stdio.h>
#include<math.h>
int main()
{
    int a,b, r;
    a=0;

    printf("Os numeros inteiros impares entre 0 e 20 sao:\n");

    while (a<=20)
    {
       r = a%2;
        if (r!=0)
        {
            printf("%i\n",a);
        }
        a=a+1;
    }
}
