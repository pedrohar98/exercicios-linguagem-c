#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
     
	char nome[50] ="Pedro Henrique";
	char troca[50];

	printf("Digite o outro nome: ");
	fgets(troca, 50, stdin);
	troca[strcspn(troca, "\n")] = '\0';

	strcpy(nome, troca);

	printf("%s", nome);

	return 0;
}