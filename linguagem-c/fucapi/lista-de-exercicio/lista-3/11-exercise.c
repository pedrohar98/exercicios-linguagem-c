#include <stdio.h>
#include <stdlib.h>

/*11. Crie uma função positivoNegativo() que receba um número e informe se ele é:
• positivo
• negativo
• zero*/

void positivoNegativo(int num){
    int resultado;

    if(num>0){
        printf("Positivo");
    } else if(num<0){
        printf("Negativo");
    } else{
        printf("Zero");
    }
}

int main(){
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    positivoNegativo(num);

    return 0;
}