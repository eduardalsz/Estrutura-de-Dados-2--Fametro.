#include <stdio.h>

void calcular(float num1, float num2, float *soma, float *sub, float *mult, float *div) {
    *soma = num1 + num2;
    *sub  = num1 - num2;
    *mult = num1 * num2;
    
    if (num2 != 0) {
        *div = num1 / num2;
    } else {
        *div = 0; 
    }
}

int main() {
    float n1, n2;
    float s, sub, m, d;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    calcular(n1, n2, &s, &sub, &m, &d);

    printf("\n--- Resultados ---\n");
    printf("Soma: %.2f\n", s);
    printf("Subtracao: %.2f\n", sub);
    printf("Multiplicacao: %.2f\n", m);
    
    if (n2 != 0) {
        printf("Divisao: %.2f\n", d);
    } else {
        printf("Divisao: Nao e possivel dividir por zero.\n");
    }

    return 0;
}
