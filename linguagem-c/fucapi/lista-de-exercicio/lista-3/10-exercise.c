#include <stdio.h>
#include <stdlib.h>

int maiorDeTres(int n1, int n2, int n3){
    int maior;

    if(n1 > n2 && n1 > n3){
        maior = n1;
    } else if (n2 > n1 && n2 > n3){
        maior = n2;
    } else {
        maior = n3;
    }

    return maior;
}

int main (){
    int n1, n2, n3;
    int maior;

    printf("Entre com 3 numeros: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    maior = maiorDeTres(n1, n2, n3);

    printf("O numero maior entre os 3 eh: %d", maior);
    return 0;
}