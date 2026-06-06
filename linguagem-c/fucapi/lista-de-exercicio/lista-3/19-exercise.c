#include <stdio.h>
#include <stdlib.h>
/*19. Desenvolva um programa em C utilizando funções e estrutura switch-case para
realizar operações matemáticas.
Requisitos:
• Crie uma função menu() responsável por exibir as seguintes opções de
operações:
o Soma
o Subtração
o Multiplicação
o Divisão
• Na função main():
o Leia dois números informados pelo usuário.
o Passe esses valores como parâmetros para a função escolha().
• Na função escolha():
o Utilize a estrutura switch-case para permitir que o usuário escolha a
operação desejada.
o De acordo com a opção selecionada, chame uma das seguintes funções:
▪ somar()
▪ subtrair()
▪ multiplicar()
▪ dividir()
• Cada uma dessas funções deve:
o Receber os dois números como parâmetros;
o Realizar a operação correspondente;

Lista Funções

o Retornar o resultado da operação.
• O resultado final da operação deve ser exibido na função escolha().*/
//functions


//menu
void menu(){
    printf("### MENU ###\n");
    printf("[1] - Soma.\n");
    printf("[2] - Subtracao.\n");
    printf("[3] - Multiplicacao.\n");
    printf("[4] - Divisao.\n");
    printf("Escolha uma da opcoes: ");
}

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

//escolha
float escolha(int opcoes, float n1, float n2){
    float resultado;

    switch(opcoes){
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

//code
int main(){
    int opcoes;
    float n1, n2, operacao;

    do{
        menu();
        scanf("%d", &opcoes);

        if(opcoes < 1 || opcoes > 4){
            printf("\nOpcao invalida, digite novamente!\n\n");
        }
    } while(opcoes < 1 || opcoes > 4);

    printf("\nInforme dois numeros: ");
    scanf("%f %f", &n1, &n2);
    operacao = escolha(opcoes, n1, n2);
    printf("\nO resultado eh: %.2f\n", operacao);   
    
    return 0;
}