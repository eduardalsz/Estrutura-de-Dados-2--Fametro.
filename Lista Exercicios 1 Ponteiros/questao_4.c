#include <stdio.h>


void dobrar(int *numero) {
    *numero = (*numero) * 2; 

int main() {
    int valor = 15;

    printf("Valor original: %d\n", valor);

    dobrar(&valor);

    printf("Valor apos a funcao dobrar: %d\n", valor);

    return 0;
}
