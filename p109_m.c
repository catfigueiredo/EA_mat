#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 void main()
  {
    char sexo, nome[51];
    printf("Insira seu nome: \n");
    scanf("%s", &nome);
    printf("Insira seu sexo (use M para masculino e F para feminino): \n");
    scanf("%s", &sexo);

    switch (sexo)
    {
     case 'M':
     printf("Sr. %s", nome);
     break;

     case 'F':
     printf("Sra. %s", nome);
     break;

     default:
     printf("Sexo informado invalido.");
   }
}
