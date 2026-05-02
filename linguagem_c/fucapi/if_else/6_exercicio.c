//6. Escrever um programa para ler um número inteiro e informar se ele é divisível por 5.

#include <stdio.h>
#include <stdlib.h>

int main () {

    int n, resto;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    
    resto = n % 5;

    if (resto == 0) {
        printf("O numero %d eh divisivel por 5", n);
    } else {
        printf("O numero %d nao eh divisivel por 5", n);
    }

    return (0);
}