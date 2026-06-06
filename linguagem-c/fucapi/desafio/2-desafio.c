#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)

/*Crie um sistema simples de cadastro de produtos em C utilizando strings.

O programa deve apresentar um menu com as opções:
[1] Cadastrar produto
[2] Mostrar relatório
[0] Sair

Cada produto deve possuir:
- código
- nome
- valor

Ao cadastrar um produto, os dados devem ser concatenados em uma linha de relatório utilizando funções da biblioteca string.h.

Utilize obrigatoriamente:
- strcpy()
- strcat()
- strlen()
- gets() ou fgets()

O relatório deve armazenar todos os produtos cadastrados e ser exibido quando o usuário selecionar a opção de mostrar relatório.
```
*/

int main (){
    int opcao, cont = 1;
    char codigo[10];
    char produto[50];
    char valor[5];
    char linha[200], relatorio[1000] = "";
    do{
        printf("\n===== MENU DE OPCOES =====\n");
        printf("[1] - Cadastrar novo produto\n");
        printf("[2] - Mostrar relatorio\n");
        printf("[0] - sair\n");
        printf("\nSelecione uma opcao: ");
        scanf("%d", &opcao);
        getchar(); // captura o enter de confirmação das opcoes

        switch (opcao){
        case 1:
            printf("\nDigite o codigo do produto [AW123]: ");
            gets(codigo);

            printf("\nDigite o nome do produto: ");
            gets(produto);

            printf("\nDigite o valor do produto: ");
            gets(valor);

            strcpy(linha, codigo);
            strcat(linha, " - ");
            strcat(linha, produto);
            strcat(linha, " - ");
            strcat(linha, valor);
            strcat(linha, "\n");

            strcat(relatorio, linha);
            printf("\nProduto cadastrado com sucesso!\n");

            break;
        case 2:
            if(strlen(relatorio) == 0){
                printf("Nao ha dados no relatorio");
            } else {
                printf("\n===== RELATORIO =====\n");
                printf("%s", relatorio);
            }
            
            break;
        case 0:
            cont = 0;
            break;
        default:
            printf("\nValor invalido\n");
            break;
        }




        printf("\nDeseja continuar? [1] sim | [0] nao: ");
        scanf("%d", &cont);
        getchar();
    } while(cont != 0);

    return 0;       
}