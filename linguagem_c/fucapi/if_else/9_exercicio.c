/*9. Criar um algoritmo que leia quatro valores inteiros e imprimir seu maior número. (suponha números
diferentes) */

#include <stdio.h>
#include <stdlib.h>

int main () {

    int n1, n2, n3, n4;

    printf("Digite quatro numeros inteiros, separados por espaco (ex - 1 2 3 4): ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    if ( n1 > n2 && n1 > n3 && n1 > n4) {
        printf("O numero %d eh o maior", n1);
    } else if (n2 > n1 && n2 > n3 && n2 > n4) {
        printf("O numero %d eh o maior", n2);
    } else if ( n3 > n1 && n3 > n2 && n3 > n4){
        printf("O numero %d eh o maior", n3);
    } else {
        printf("O numero %d eh o maior", n4);
    }

    return (0);
}