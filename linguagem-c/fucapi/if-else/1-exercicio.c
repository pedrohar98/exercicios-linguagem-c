//1. Faça um algoritmo para ler dois números inteiros A e B e informar se A é divisível por B.

#include <stdio.h>
#include <stdlib.h>

int main () {
    int a, b, result;

    printf("Digite dois numeros inteiros, separados por espaco (ex - 1 2): ");
    scanf("%d %d", &a, &b);

    if (b == 0){
        printf("Nao existe divisao por zero.");
    } else {
        result = a % b;

        if (result == 0) {
            printf("%d eh divisivel por %d", a, b);
        } else {
            printf("%d nao e divisivel por %d", a, b);
        }

    }
    return(0);
}
