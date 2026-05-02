/*10. Fazer um programa que leia um número inteiro de 3 casas decimais e imprima se o algorismo da casa das
centenas é par ou ímpar*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    int n, c, resto;

    printf("Digite um numero com 3 casas decimais: ");
    scanf("%d", &n);

    c = n / 100;
    resto = c % 2;

    if (resto == 0){
        printf("O algarismo da casa das centenas %d eh par", c);
    } else {
        printf("O algarismo da casa das centenas %d eh impar", c);
    }

    return (0);
}

