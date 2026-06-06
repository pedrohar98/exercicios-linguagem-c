#include <stdio.h>
#include <stdlib.h>

/*16. Faça uma função trocarValores() que troque os valores de duas variáveis
utilizando passagem por referência (ponteiros).*/

void trocarValores(int *n1, int *n2){
    *n1 = *n1 + *n2;
    *n2 = *n1 - *n2;
    *n1 = *n1 - *n2;

}

int main(){
    int n1, n2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    trocarValores(&n1, &n2);

    printf("N1 = %d, N2 = %d", n1, n2);

    return 0;
}