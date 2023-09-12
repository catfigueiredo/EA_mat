#include<stdio.h>
  int main()
  {
      float sm,pr,ns;
      printf("Insira o salario mensal:\n");
      scanf("%f",&sm);
      printf("Insira o percentual de reajuste:\n");
      scanf("%f",&pr);
      ns=sm*(pr/100+1);
      printf("Novo salario= %.2f", ns);

  }
