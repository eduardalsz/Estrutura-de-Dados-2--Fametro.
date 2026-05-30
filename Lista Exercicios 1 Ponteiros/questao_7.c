#include <stdio.h>

void inverterString(char *str) {
    char *inicio = str;
    char *fim = str;
    char temp;

    while (*fim != '\0') {
        fim++;
    }
    fim--; 
        *inicio = *fim;
        *fim = temp;

        inicio++;
        fim--;    
    }
}

int main() {
    char palavra[] = "brasil";

    printf("String original: %s\n", palavra);
    
    inverterString(palavra);
    
    printf("String invertida: %s\n", palavra);

    return 0;
}
