#include<stdio.h>
#include<math.h>
 int main()
  {
  int a,b,c,d;
  printf("Insira quatro valores inteiros:");
  scanf("%i %i %i %i", &a,&b,&c,&d);

  if (a%2==0&&a%3==0)
  {
  printf("%i e divisivel por 2 e 3.\n", a);
  }
   if (b%2==0&&b%3==0)
  {
  printf("%i e divisivel por 2 e 3.\n", b);
  }
  if (c%2==0&&c%3==0)
  {
  printf("%i e divisivel por 2 e 3.\n", c);
  }
  if (d%2==0&&d%3==0)
  {
  printf("%i e divisivel por 2 e 3.\n", d);
  }


  printf ("Os valores nao apresentados nao sao divisiveis por 2 e por 3 ao mesmo tempo.");

  }
