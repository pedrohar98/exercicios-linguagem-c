#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double potencial(int base, int expoente){
    double resultado;
    resultado = pow(base,expoente);
    return resultado;
}

int main(){
    int base, expoente;
    double resultado;

    printf("\nDigite a base: ");
    scanf("%d", &base);

    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    resultado = potencial(base, expoente);

    printf("O resultado eh: %.2lf\n", resultado);
    return 0;
}