#include <stdio.h>
#include <stdlib.h>

// Functions
void parOuImpar(int num){
    if(num % 2 == 0){
        printf("O numero eh par!"); //The number is even
    } else{
        printf("O numero eh impar!"); //The number is odd
    }
}

// Code
int main(){

    //1. Faça uma função parOuImpar() que receba um número inteiro e informe se ele é par ou ímpar.
    //1. Create a function evenOrOdd() that receives an integer and informs whether it is even or odd.
    int num;

    printf("Digite um numero: "); //Type a number
    scanf("%d", &num);

    parOuImpar(num);

    return 0;
}