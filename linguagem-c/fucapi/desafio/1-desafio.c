    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

    int main(){

        int option, count = 1;
        char code[10];
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
                    printf("\nDigite o codigo do produto [AW123]: ");
                    gets(code);

                    printf("\nDigite o nome do produto: ");
                    gets(product);

                    printf("\nDigite o Valor: RS: ");
                    gets(value);
                    
                    strcat(line, "");
                    strcat(line, code);
                    strcat(line, " - ");
                    strcat(line, product);
                    strcat(line, " - ");
                    strcat(line, value);
                    strcat(line, "\n");

                    strcat(report, line);
                    printf("\nProduto cadastrado com sucesso!\n");
                break;
                    
                case 2:
                    if (strlen(report) == 0) {
                        printf("\nNao ha dados no relatorio\n");
                    } else {
                        printf("\n====== RELATORIO DE PRODUTOS ======\n");
                        printf("\n%s\n", report);
                    }
                break;

                case 0:
                count = 0;
                break;
                
                default:
                    printf("\nValor invalido\n");
                break;
            }
        } while (count != 0);
        
        return 0;
    }