#include <stdio.h>
#include <stdlib.h>

/*14. Faça uma função imprimirLinha() que receba um caractere e uma quantidade,
imprimindo esse caractere repetidas vezes na tela.*/

void imprimirLinha(char caractere, int quantidade){
    for (int i = 0; i <= quantidade; i++){
        printf("%d ---> %c\n", i, caractere);
        printf("\n");    
    }
    
}

int main(){
    int quantidade;
    char caractere;

    printf("Digite o caractere: ");
    scanf("%c", &caractere);
    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);
    printf("\n");

    imprimirLinha(caractere, quantidade);
    
    return 0;
}