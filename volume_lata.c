#include<stdio.h>
  int main ()
  {
      float volume,raio,altura;
      printf("digite o raio:");
      scanf("%f",&raio);
      printf("digite a altura:");
      scanf("%f", &altura);
      volume=3.14*raio*raio*altura;
      printf("volume = %f", volume);
  }
