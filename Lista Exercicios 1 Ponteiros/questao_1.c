#include <stdio.h>

void trocarValores(int *a, int *b) {
    int temp = *a; 
    *b = temp;     
}

int main() {
    int var1, var2;

    printf("Digite o valor da primeira variavel: ");
    scanf("%d",&var1);
    printf("Digite o valor da segunda variavel: ");
    scanf("%d",&var2);

    printf("\nValores originais: Variavel 1 = %d, Variavel 2 = %d\n", var1, var2);

    trocarValores(&var1,&var2);

    printf("Valores trocados:  Variavel 1 = %d, Variavel 2 = %d\n", var1, var2);

    return 0;
}
