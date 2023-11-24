#include<stdio.h>
#include<math.h>

 int main ()
  {
      int a,b,c;
      c=1;
      b=1;
      for (a=1;a<=9;a++)
      {
       b=b*a;
       if(a%2==1)
       {
           printf("%i = %i\n",a, b);
       }

      }

  }
