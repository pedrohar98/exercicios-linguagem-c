#include <stdio.h>
#include <stdlib.h>

/*9. Crie uma função converterTemperatura() que receba uma temperatura em
Celsius e retorne o valor em Fahrenheit.*/

float converterTemperatura(float celsius){
    float fahrenheit;

    fahrenheit = (celsius * 1.8) + 32;
    return fahrenheit;
}

int main (){
    float celsius, fahrenheit;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = converterTemperatura(celsius);
    printf("Conversao para Fahrenheit: %.1f F\n", fahrenheit);
    
    return 0;
}

