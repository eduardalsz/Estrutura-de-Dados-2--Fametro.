#include <stdio.h>

void encontrarMaiorMenor(int *array, int tamanho, int *maior, int *menor) {
  
    *menor = *array;

    for (int i = 1; i < tamanho; i++) {
        
        if (*(array + i) > *maior) {
            *maior = *(array + i);
        }
        if (*(array + i) < *menor) {
            *menor = *(array + i);
        }
    }
}

int main() {
    int tam;

    printf("Digite o tamanho do array: ");
    scanf("%d", &tam);

    int meuArray[tam];
    for (int i = 0; i < tam; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &meuArray[i]);
    }

    int maiorElemento, menorElemento;

    encontrarMaiorMenor(meuArray, tam, &maiorElemento, &menorElemento);

    printf("\nMaior elemento: %d\n", maiorElemento);
    printf("Menor elemento: %d\n", menorElemento);

    return 0;
}
