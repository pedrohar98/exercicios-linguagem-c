//2. Faça um algoritmo para ler dois números inteiros e escrever o maior.

#include <stdio.h>
#include <stdlib.h>

int main () {

    int n1, n2;

    printf("Digite dois numeros inteiros, separados por espaco (ex - 1 2): ");
    scanf("%d %d", &n1, &n2);

    if (n1 > n2) {
        printf("O numero %d eh maior que o %d", n1, n2);
        } else if (n2 > n1) {
            printf("o numero %d eh maior que o %d", n2, n1);
        } else {
            printf("Os dois numeros sao iguais");
        } 

    return(0);
}