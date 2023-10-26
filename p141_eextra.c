#include<stdio.h>
#include<math.h>

int main ()
{
    int x, a, b;
    printf("Insira um valor natural: ");
    scanf("%i", &x);
    a=1;
    printf("Os divisores do numero inserido sao: \n");
    while(a<=x)
    {
        b=x%a;
        if(b==0)
        {
            printf("%i \n", a);
        }
        a=a+1;
    }

}
