/*13. Faça um algoritmo que leia os valores de A, B e C e faça a seguinte operação de acordo com os valores de
cada um deles (não se esqueça de imprimir o resultado)
 Se A for o maior: B + C
 Se B for o maior: A * C
 Se C for o maior: A - B*/

#include <stdio.h>
#include <stdlib.h>

int main (){

    float a, b, c, result;

    printf("Digite tres valores, separados por espaco (ex - 1 2 3): ");
    scanf("%f %f %f", &a, &b, &c);

    if (a > b && a > c) {
        result = b + c;

        printf("O resultado eh: %.2f", result);
    } else if (b > a && b > c){
        result = a * c;

        printf("O resultado eh: %.2f", result);
    } else if (c > a && c > b){
        result = a - b;

        printf("O resultado eh: %.2f", result);
    } else {
        printf("Voce digitou dois valores iguais, tente novamente");
    }

    return 0;
}