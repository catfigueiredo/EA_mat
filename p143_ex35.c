#include<stdio.h>
 int main ()
 {
     float nota;
     printf("Insira a nota do aluno: \n");
     scanf("%f",&nota);

     if (nota>9)
     {
         printf("A nota equivale a A.");
     }
     else if (nota<=9&&nota>7)
     {
         printf("A nota equivale a B.");
     }
     else if (nota<=7&&nota>5)
     {
         printf("A nota equivale a C.");
     }
     else if (nota<=5&&nota>3.5)
     {
         printf("A nota equivale a D.");
     }
     else if (nota<=3.5)
     {
         printf("A nota equivale a E.");
     }
     else
     {
         printf("Nota invalida.");
     }
 }
