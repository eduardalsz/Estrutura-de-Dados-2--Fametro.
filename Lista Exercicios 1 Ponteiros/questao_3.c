#include <stdio.h>

int main() {
    int numero = 42;    
    int *ponteiro;      

    ponteiro = &numero; 
    
    printf("Valor da variavel: %d\n", numero);
    printf("Endereco da variavel: %p\n", (void*)&numero);
    printf("Valor do ponteiro (endereco armazenado): %p\n", (void*)ponteiro);
    printf("Valor apontado pelo ponteiro: %d\n", *ponteiro);

    return 0;
}
