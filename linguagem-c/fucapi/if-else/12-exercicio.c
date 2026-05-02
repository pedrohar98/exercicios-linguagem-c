/* 12. Criar um algoritmo que leia a idade de uma pessoa e informar: Se é maior de idade (>= 18); Se é menor de
idade; Se é maior de 65 anos.*/

#include <stdio.h>
#include <stdlib.h>

int main (){

    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("Voce eh maior de idade\n");
    } else {
        printf("Voce eh menor de idade\n");
    }

    if (idade > 65) {
        printf("Voce tem mais de 65 anos\n");
    }

    return 0;
}