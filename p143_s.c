#include<stdio.h>
 int main()
 {
    int dividendo, divisor, quociente;
    quociente=0;
    printf("Insira o dividendo: ");
    scanf("%i", &dividendo);
    printf("Insira o divisor: ");
    scanf("%i", &divisor);
    while(dividendo>=divisor)
    {
        dividendo=dividendo-divisor;
        quociente=quociente+1;
    }
    printf("Quociente igual a: %i",quociente);
 }
