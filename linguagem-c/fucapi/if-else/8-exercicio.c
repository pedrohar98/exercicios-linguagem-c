// 8. Entrar com um número e imprimir uma das mensagens: maior do que 20, igual a 20 ou menor do que 20.

#include <stdio.h>
#include <stdlib.h>

int main () {

    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n); 

    if (n > 20) {
        printf("%d eh maior do que 20", n);
    } else if (n == 20) {
        printf("%d eh igual a 20", n);
    } else {
        printf("%d eh menor do que 20", n);
    }

    return (0);
}