#include<stdio.h>
  void main ()
  {
      float volume, comprimento, largura, altura;
      printf("Insira o comprimento:\n");
      scanf("%f", &comprimento);
      printf("Insira a largura:\n");
      scanf("%f", &largura);
      printf("Insira a altura:\n");
      scanf("%f", &altura);

      volume=comprimento*largura*altura;
      printf("Volume= %.2f",volume);

      return 0;
  }
