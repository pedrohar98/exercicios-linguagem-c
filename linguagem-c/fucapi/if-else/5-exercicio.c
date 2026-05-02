/*5. Criar um algoritmo que leia dois números inteiros e imprimir o quadrado do menor número e a raiz
quadrada do maior número, e a mensagem “São Iguais” para números iguais*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

    int n1, n2;
    float quad, raiz;

    printf("Digite dois numeros inteiros, separados por espaco (ex - 1 2): ");
    scanf("%d %d", &n1, &n2);

    if (n1 < n2) {
        quad = pow(n1, 2);
        raiz = sqrt(n2);

        printf("Quadrado do menor %.2f, Raiz quadrada do maior %.2f", quad, raiz);
    } else if (n1 > n2) {
        quad = pow(n2, 2);
        raiz = sqrt(n1);

        printf("Quadrado do menor %.2f, Raiz quadrada do maior %.2f", quad, raiz);
    } else {
        printf("Os numeros sao iguais");
    }

    return(0);
}