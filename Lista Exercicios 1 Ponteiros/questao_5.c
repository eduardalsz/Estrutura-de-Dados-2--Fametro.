#include <stdio.h>
 
void copiarString(char *origem, char *destino) {
    while (*origem != '\0') {  
        *destino = *origem;    
        origem++;              
        destino++;             
    }
    *destino = '\0';            
}

int main() {
    char strOrigem[100];
    char strDestino[100];

    printf("Digite uma frase/string: ");
    fgets(strOrigem, sizeof(strOrigem), stdin);

    for (int i = 0; strOrigem[i] != '\0'; i++) {
        if (strOrigem[i] == '\n') {
            strOrigem[i] = '\0';
            break;
        }
    }

    copiarString(strOrigem, strDestino);

    printf("\nString Origem:  %s\n", strOrigem);
    printf("String Destino: %s\n", strDestino);

    return 0;
}
