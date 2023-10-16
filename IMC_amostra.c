#include <stdio.h>
#include <math.h>

int main() {
    float massa, altura, indice;
    char continuar;

    do {
        printf("---------------------------------\n");
        printf("Digite sua massa em kg: ");
        scanf("%f", &massa);
        printf("\nDigite sua altura em metros: ");
        scanf("%f", &altura);
        printf("---------------------------------\n");

        indice = massa / pow(altura, 2);

        if (indice < 16) {
            printf( "\nIMC: %.1f, Estado de magreza grau III.\n", indice);
        } else if (indice >= 16 && indice <= 16.9) {
            printf("\nIMC: %.1f, Estado de magreza grau II.\n", indice);
        } else if (indice >= 17 && indice <= 18.4) {
            printf("\nIMC: %.1f, Estado de magreza grau I.\n", indice);
        } else if (18.5 <= indice && indice < 25) {
            printf("\nIMC: %.1f, Estado nutricional adequado.\n", indice);
        } else if (25 <= indice && indice < 30) {
            printf("\nIMC: %.1f, Estado de sobrepeso.\n", indice);
        } else if (30 <= indice && indice < 35.) {
            printf("\nIMC: %.1f, Estado de obesidade grau I.\n", indice);
        } else if (35 <= indice && indice <= 40) {
            printf("\nIMC: %.1f, Estado de obesidade grau II.\n", indice);
        } else if (indice > 40) {
            printf("\nIMC: %.1f, Estado de obesidade grau III.\n", indice);
        } else {
            printf("\nSituacao invalida.\n");
        }

        printf("\n---------------------------------");
        printf("\nDeseja calcular o IMC novamente? (S/N): ");

        scanf(" %c", &continuar);
    } while (continuar == 'S');

if (continuar == 'N')
     {
      printf("\nOperacao encerrada.\n");
     }
else
     {
      printf("\nOperacao invalida.\n");
     }

}
