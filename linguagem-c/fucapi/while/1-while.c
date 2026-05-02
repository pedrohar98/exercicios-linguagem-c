/*P1 – Escreva um programa que leia os números
maiores que 0 enquanto a sua soma não ultrapasse
10, escreva a soma:*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    int soma = 0;

    while (soma <= 10){
        printf("Digite um numero >0 e <10: ");
        scanf("%d", &num);

        if(num >0 && num<10){
            soma += num;
        } else {
            printf("Numero invalido\n");
        }
    }
    
    printf("A soma total eh: %d",soma);
    return 0;
}