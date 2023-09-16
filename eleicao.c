#include<stdio.h>
  int main()
  {
    int A,B,C;// votos de cada candidato
    float T ;// numero total de eleitores
    int BR ;// numero de votos em branco
    int N ;// numero de votos nulos
    float PV ;//percentual de votos validos
    float PA,PB,PC,PBR,PN ;// percentual dos respectivos votos

     printf("Insira a quantidade de votos para o candidato A:\n");
     scanf("%i",&A);
     printf("Insira a quantidade de votos para o candidato B:\n");
     scanf("%i",&B);
     printf("Insira a quantidade de votos para o candidato C:\n");
     scanf("%i",&C);
     printf("Insira a quantidade de votos brancos:\n");
     scanf("%i",&BR);
     printf("Insira a quantidade de votos nulos:\n");
     scanf("%i",&N);

     T=A+B+C+BR+N;

     PV=((A+B+C)/T)*100;

     PA=(A/T)*100;// percentual de A
     PB=(B/T)*100;// percentual de B
     PC=(C/T)*100;// percentual de C
     PBR=(BR/T)*100;// percentual de votos brancos
     PN=(N/T)*100;// percentual de votos nulos

     printf("Total de votos: %.1f \n", T);
     printf("Percentual de votos validos: %.2f%% \n", PV);
     printf("Percentual de votos para o candidato A: %.2f%% \n", PA);
     printf("Percentual de votos para o candidato B: %.2f%% \n", PB);
     printf("Percentual de votos para o candidato C: %.2f%% \n", PC);
     printf("Percentual de votos brancos: %.2f%% \n", PBR);
     printf("Percentual de votos nulos: %.2f%% \n", PN);

  }
