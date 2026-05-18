#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*Exercício: Faça um programa para fazer uma copia de uma string sem usar a função strcpy*/

int main(){
    char frase[100] = {"Como fazer uma copia de uma string"};
    char copia[100];
    int i = 0;

    printf("Frase: %s\n", frase);
    printf("Copia: %s\n", copia);

    while(frase[i] != '\0'){
        copia[i] = frase[i];
        i++;
    }
    copia[i] = frase[i];
    
    printf("Frase: %s\n", frase);
    printf("Copia: %s\n", copia);

    return 0;
}

