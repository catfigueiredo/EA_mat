#include<stdio.h>
  int main()
   {
       float V,R;
       printf("Insira o valor do raio: \n");
       scanf("%f",&R);

       V=(4/3)*3.14159*(R*R*R);

       printf("Volume da esfera= %.2f", V);

       return 0;
   }
