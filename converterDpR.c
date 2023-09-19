#include<stdio.h>
  void main()
  {
      float cotacao, dolares, conversao;
      printf("Insira a cotacao do real atual:\n");
      scanf("%f", &cotacao);
      printf("Insira o valor em dolares:\n");
      scanf("%f", &dolares);
      conversao=cotacao*dolares;
      printf("valor em reais= %.2f",conversao);


  }
