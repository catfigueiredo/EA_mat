#include<stdio.h>
 int main()
   {
       float n1,n2,n3,media;
       printf("Insira a nota da prova 1: \n");
       scanf("%f",&n1);
       printf("Insira a nota da prova 2: \n");
       scanf("%f",&n2);
       printf("Insira a nota da prova 3: \n");
       scanf("%f",&n3);

       media=(n1*2+n2*3+n3*5)/10;

       if (media >= 7)
       {
           printf("Aluno aprovado com media de: %.1f", media);
       }
       else
       {
           printf("Aluno reprovado com media de: %.1f", media);
       }
   }
