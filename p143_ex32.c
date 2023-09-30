#include<stdio.h>
 int main ()
   {
       float massa,altura,indice;

       printf("Digite sua massa em kg: \n");
       scanf("%f",&massa);
       printf("Digite sua altura em metros: \n");
       scanf("%f",&altura);

       indice = massa/ (altura * altura);

       if (18.5<=indice&&indice<25)
       {
           printf("Situacao normal.");
       }
       else if (25<=indice&&indice<30)
       {
           printf("Situacao de sobrepeso.");
       }
       else if (30<=indice&&indice<35.)
       {
           printf("Situacao de obesidade grau 1.");
       }
       else if (35<=indice&&indice<40)
       {
           printf("Situacao de obesidade grau 2.");
       }
       else
       {
           printf("Situacao invalida");
       }
   }
