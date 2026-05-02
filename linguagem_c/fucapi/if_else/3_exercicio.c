/*3. Faça um algoritmo para ler duas variáveis inteiras A e B e garantir que A e B fiquem em ordem crescente, 
ou seja, a variável A deverá armazenar o menor valor fornecido e a variável B o maior.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int a, b, c;

    printf("Digite dois numeros inteiros, separados por espaco (ex - 1 2): ");
    scanf("%d %d", &a, &b);

    if (a > b) {
        
        c = b;
        b = a;
        a = c;

        printf("A = %d e B = %d", a, b);

    } else if (b > a) {

        printf("A = %d e B = %d", a, b);

    } else {

        printf("Os dois numeros sao iguais");

    }
         
    return(0);
}