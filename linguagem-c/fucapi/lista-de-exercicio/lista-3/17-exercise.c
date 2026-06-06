#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*17. Crie uma função contadorVogais() que receba uma palavra e retorne a
quantidade de vogais existentes nela.*/

void contadorVogais(char palavra[]){
    int contador = 0;
    for(int i = 0; i<strlen(palavra); i++){
        if (palavra[i] == 'a' ||
            palavra[i] == 'e' || 
            palavra[i] == 'i' ||
            palavra[i] == 'o' ||
            palavra[i] == 'u' ){

            contador++;
        }
    }

    printf("Quantidade de vogais: %d", contador);
}

int main (){
    char palavra[30];

    printf("Digite uma palavra: ");
    scanf("%s", &palavra);
    
    contadorVogais(palavra);

    return 0;
}