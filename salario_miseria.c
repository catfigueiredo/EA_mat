#include<stdio.h>
int main() {
 float vh,qht,pd,sb,vd,sl;
  printf("digite o valor da hora-aula:");
  scanf("%f", &vh);
  printf("digite a quantidade de horas trabalhadas:");
  scanf("%f", &qht);
  printf ("digite a porcentagem de desconto:");
  scanf("%f", &pd);
  sb= vh*qht;
  vd= sb*(pd/100);
  sl= sb-vd;
  printf("salario liquido: %f", sl);
}
