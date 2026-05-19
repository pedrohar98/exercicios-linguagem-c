#include <stdio.h>
#include <stdlib.h>

//2. Crie uma função media() que receba três notas e retorne a média aritmética.
float mediaAritmetica(int n1, int n2, int n3){
    float media = (n1 + n2 + n3) / 3.0;
    return media;
}

int main(){
    int n1, n2, n3;
    float media;
    printf("Digite as 3 notas: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    media = mediaAritmetica(n1, n2, n3);
    printf("Media final: %.2f\n", media);

    return 0;
}