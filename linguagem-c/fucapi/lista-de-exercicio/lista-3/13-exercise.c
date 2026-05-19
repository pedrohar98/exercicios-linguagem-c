#include <stdio.h>
#include <stdlib.h>

/*13. Crie uma função calcularAreaRetangulo() que receba:
• base
• altura
e retorne a área do retângulo.*/

int calcularAreaRetangulo(int base, int altura){
    float area;
    area = base * altura;
    return area;
}

int main(){
    int base, altura;
    float area;

    printf("Digite o valor da base: ");
    scanf("%d", &base);
    printf("Digite o valor da altura: ");
    scanf("%d", &altura);

    area = calcularAreaRetangulo(base, altura);
    printf("Area = %.2f", area);

    return 0;
}