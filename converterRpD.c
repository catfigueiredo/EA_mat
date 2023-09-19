#include<stdio.h>
  void main()
  {
      float cotacao, reais, conversao;
      printf("Insira a cotacao do dolar atual:\n");
      scanf("%f", &cotacao);
      printf("Insira o valor em reais:\n");
      scanf("%f", &reais);
      conversao=cotacao/reais;
      printf("valor em dolares= %.2f",conversao);

  }

