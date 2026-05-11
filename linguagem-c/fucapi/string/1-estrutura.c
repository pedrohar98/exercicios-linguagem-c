#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    
    char senhaMestra[] = "1234";
	char tentativa[20];

	printf("Digite uma senha: ");
	fgets(tentativa, 20, stdin);
	tentativa[strcspn(tentativa, "\n")] = '\0';

	if(strcmp(tentativa, senhaMestra) == 0) {
	    printf("\nAcesso permitido.");
	} else {
	    printf("\nAcesso negado.");
	}

	return 0;
}