#include <stdio.h>

int main() {
    int a, b, quoeficiente;

    printf("Digite dois numeros:");
    scanf("%d%d", &a, &b);

    if (b == 0){
        printf("Erro: divisao por zero nao permita.\n");
        return 1;
    }

    for (quoeficiente = 0; a >= b; quoeficiente++){
        a -= b;
    }

    printf("O quoeficiente inteiro da divisao de %d e %d e: %d\n", a + (b * quoeficiente), b, quoeficiente);

    return 0;
}