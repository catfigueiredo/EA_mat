#include<stdio.h>
#include<math.h>

int main ()
{
    int g, q, s;  //g=grao, q=quadro, s=soma
    g=1;
    q=1;
    s=1;
    while(q<=30)
    {
       s=s+g;
       g=g*2;
       q=q+1;


    }
    printf("Total de graos e igual a: %i +\n", s);
    g=1;
    q=1;
    s=1;
    while(q<=30)
    {
       s=s+g;
       g=g*2;
       q=q+1;

    }
    printf("Total de graos e igual a: %i +\n", s);
    g=1;
    q=1;
    s=1;
    while(q<=4)
    {
       s=s+g;
       g=g*2;
       q=q+1;

    }
    printf("Total de graos e igual a: %i", s);

}

