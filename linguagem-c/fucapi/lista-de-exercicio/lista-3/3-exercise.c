#include <stdio.h>
#include <stdlib.h>

/*Faça uma função tabuada() que receba um número inteiro e mostre sua
tabuada de 1 a 10.*/
void tabuada(int number){
    int result;
    for(int i=0; i<11; i++){
        result = number * i;
        printf("%d x %d = %d\n", number, i, result);
    }
}

int main(){
    int number;
    printf("Digite um numero: ");
    scanf("%d", &number);

    tabuada(number);

    return 0;
}

