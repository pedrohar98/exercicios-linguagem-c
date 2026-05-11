#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int option, count = 1;
    char code[2];
    char number[3];
    char product[20];
    char value[5];
    char report[1000], line[200]; 

    do {
        printf("\n====== MENU DE OPCOES ======\n");
        printf("[1] - Cadastrar novo produto\n");
        printf("[2] - Mostrar relatorio\n");
        printf("[0] - Sair\n");
        printf("\nSelecione uma opcao: ");

        scanf("%d", &option);
        getchar(); //captura o enter de confirmação das options

        switch (option){
            case 1:
                printf("\nDigite o codigo do produto: ");
                gets(code);

                printf("Digite o nome do produto: ");
                gets(product);

                printf("Digite o Valor: RS: ");
                gets(value);
                
                strcat(line, "");
                strcat(line, code);
                strcat(line, " - ");
                strcat(line, product);
                strcat(line, " - ");
                strcat(line, value);

                strcat(report, line);
            break;
                
            case 2:
                if (strcmp (report, line) == 0) {
                    printf("\nNao ha dados no relatorio\n");
                } else {

                }
            break;

            case 0:
            return 0;
            
            default:
                printf("\nValor invalido\n");
            break;
        }
    } while (count != 0);
    
    return 0;
}