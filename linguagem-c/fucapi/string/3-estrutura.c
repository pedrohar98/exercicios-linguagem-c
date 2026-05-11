#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    
    char email[100];
    char dominio[] = "@faculdade.com.br";
    
    printf("Digite seu nome de usuario: ");
    fgets(email, 50, stdin);
    email[strcspn(email, "\n")] = '\0';
    
    strcat(email, dominio);
    
    printf("%s", email);

	return 0;
}