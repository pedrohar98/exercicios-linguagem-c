/*11. Ler dois números A e B. Calcular o seu produto e atribuir à variável Produto. Se o produto for maior ou
igual a 20, atribuir o valor de B à variável A, senão, atribuir o valor de A à variável B. Ao final, imprimir
os valores de A, B e Produto.*/

#include <stdio.h>
#include <stdlib.h>

int main (){

    float  a, b, c, prod;

    printf("Digite dois numeros reais: ");
    scanf("%f %f", &a, &b); 

    prod =  a * b;
    
    if (a == b) {

        printf("Os valores sao iguais. A = %.2f, B = %.2f, Produto = %.2f", a, b, prod);

    } else if (prod >= 20 ) {
        
        c = a;
        a = b;
        b = c;

        printf("O valor atual de A eh %.2f e B %.2f e o produto eh %.2f", a, b, prod);

    } else {
        
        c = b;
        b = a;
        a = c;

        printf("O valor atual de A eh %.2f e B %.2f e o produto eh %.2f", a, b, prod);
    }   

    return 0;
}

