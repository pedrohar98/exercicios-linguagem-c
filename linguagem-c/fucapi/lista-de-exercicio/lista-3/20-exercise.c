#include <stdio.h>
#include <stdlib.h>

/*20. Faça um programa que utilize funções separadas para:
• ler números
• realizar cálculos
• mostrar resultados*/

void leitura(){
    printf("Digite dois numeros: ");
}

void escolha(){
    printf("\nOperacoes: \n");
    printf("[1]-soma.\n");
    printf("[2]-subtracao.\n");
    printf("[3]-multiplicacao.\n");
    printf("[4]-divisao.\n");
    printf("Escolha uma das opcoes: ");
}

//operacoes

//operacoes
float soma(float n1, float n2){
    return n1 + n2;
}
float subtracao(float n1, float n2){
    return n1 - n2;
}
float multiplicacao(float n1, float n2){
    return n1 * n2;
}
float divisao(float n1, float n2){
    return n1 / n2;
}

float operacoes(int opcao, float n1, float n2){
    float resultado;
    switch(opcao){
        //soma
        case 1:
           resultado = soma(n1, n2);
        break;
        //subtracao
        case 2:
            resultado = subtracao(n1, n2);
        break;
        //multiplicacao
        case 3:
            resultado = multiplicacao(n1, n2);
        break;
        //divisao
        case 4:
            resultado = divisao(n1, n2);
        break;
        default:
            resultado = 0;
            printf("Opcao invalida");
            break;
    }
    return resultado;
}

int main(){
    int opcao;
    float resultado, n1, n2;
    leitura();
    scanf("%f %f", &n1, &n2);
    escolha();
    scanf("%d", &opcao);
    resultado = operacoes(opcao, n1, n2);

    printf("\nO resultado eh: %.2f", resultado);
    
    return 0;
}