#include <stdio.h>
#include <stdlib.h>

/*21. Crie uma função recursiva contagemRegressiva() que receba um número inteiro
e mostre a contagem até zero.*/
void contagemRegressiva(int num){
    /*for(int i = num; i >= 0; i--){
        printf("%d\n", i);
    }*///aqui o chat passou que não é recursiva. Recursiva a função chama ela dentro dela mesma.

    //condição de parada
    if(num >=0){
        printf("%d\n", num);
        //função chamando ela mesma
        contagemRegressiva(num - 1);
    }
}

int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    contagemRegressiva(num);
    return 0;
}