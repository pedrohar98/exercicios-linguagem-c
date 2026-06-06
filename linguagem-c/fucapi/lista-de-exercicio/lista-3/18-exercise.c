#include <stdio.h>
#include <stdlib.h>

/*18. Faça uma função calcularIMC() que receba:
• peso
• altura
e retorne o valor do IMC.*/

float calcularIMC(float peso, float altura){
    float formula;
    formula = peso/(altura * altura);
    return formula; 
}

int main(){
    float peso, altura;
    float formula;

    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Digite sua altura: ");
    scanf("%f", &altura);

    formula = calcularIMC(peso, altura);
    printf("%.2f", formula);

    return 0;
}