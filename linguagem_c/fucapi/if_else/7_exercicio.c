// 7. Escrever um programa para ler um número inteiro e informar se ele é divisível por 3 e por 7.

#include <stdio.h>
#include <stdlib.h>


int main () {

    int n, r1, r2;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n); 

    r1 = n % 3;
    r2 = n % 7;

    if (r1 == 0 && r2 == 0) {
        printf("O numero %d eh divisivel por 3 e 7", n);
    } else {
        printf("O numero %d nao eh divisivel por 3 e 7", n);
    }

    return (0);
}