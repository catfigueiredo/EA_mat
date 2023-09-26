#include<stdio.h>
  int main ()
{
    int x;
    printf("Insira um valor inteiro:");
    scanf("%i",&x);

    if(x==0)
    {
        printf("Numero nulo. \n");
    }
    else
       if(x>0)
    {
        printf("O numero e positivo. \n");
    }

    else
    {
        printf("O numero e negativo. \n");
    }


}
