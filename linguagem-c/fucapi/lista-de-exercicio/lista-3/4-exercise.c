#include <stdio.h>
#include <stdlib.h>

//Crie uma função fatorial() que receba um número inteiro e retorne seu fatorial.
//Fatorial é a multiplicação de um número por todos os anteriores até 1.

//function
int fatorial(int num){
    int result = 1;
    for(int i=num; i>=1; i--){
        result *= i;       
    }
    return result;
}

//code
int main (){
    int num, result;
    printf("\nDigite um numero inteiro: "); //Enter an integer
    scanf("%d", &num);
    result = fatorial(num);
    printf("\nO resultado eh: %d\n", result); 

    return 0;
}

