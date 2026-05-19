#include <stdio.h>
#include <stdlib.h>
/*12. Faça uma função contador() que receba dois números e mostre todos os valores
entre eles.*/
void contador(int n1, int n2){

    if (n1>n2)
    {
        for (int i = n1; i >= n2; i--)
        {
            printf("%d ", i);
        }
    } else{
        for (int i = n1; i <= n2; i++)
        {
            printf("%d ", i);
        }
    }
        
}

int main(){
    int n1, n2;

    printf("Digite dois numeros: ");
    scanf("%d %d", &n1, &n2);
    contador(n1, n2);
}