#include <stdio.h>
#include <stdlib.h>

/*15. Crie uma função primo() que receba um número inteiro e informe se ele é
primo.*/

void primo(int num){
    int cont = 0;
    
    for(int i = 2; i < num; i++){
        if(num % i == 0){
            cont++;
        }   
    }
    
    if(cont == 0){
        printf("O numero eh primo");
    } else {
        printf("O numero nao eh primo");
    }
}

int main(){
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    primo(num);

    return 0;
}