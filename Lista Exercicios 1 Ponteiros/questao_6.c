#include <stdio.h>
#include <ctype.h> 

void contarVogaisConsoantes(char *str, int *vogais, int *consoantes) {
    *vogais = 0;
    *consoantes = 0;

    while (*str != '\0') {
        char c = tolower(*str); 
        
        if (c >= 'a' && c <= 'z') {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                (*vogais)++;
            } else {
                (*consoantes)++;
            }
        }
        str++;
    }

int main() {
    char texto[100];
    int qtdVogais, qtdConsoantes;

    printf("Digite uma palavra ou frase: ");
    fgets(texto, sizeof(texto), stdin);

    contarVogaisConsoantes(texto, &qtdVogais, &qtdConsoantes);

    printf("\nResultado da analise:\n");
    printf("Vogais: %d\n", qtdVogais);
    printf("Consoantes: %d\n", qtdConsoantes);

    return 0;
}
