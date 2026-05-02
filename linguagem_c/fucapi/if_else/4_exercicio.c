//4. Escrever um programa para ler um número inteiro e imprimir se ele é positivo, negativo ou nulo

#include <stdio.h>
#include <stdlib.h>

int main () {

    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (n > 0) {
        printf("O numero %d eh positivo", n);
    } else if (n < 0){
        printf("O numero %d eh negativo", n);        
    } else {
        printf("O numero %d eh nulo", n);
    }

    return(0);
}