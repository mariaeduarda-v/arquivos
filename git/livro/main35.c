#include <stdio.h>

int main() {
    // Variáveis para armazenar os termos da série
    int t1, t2, proximo;

    printf("Defina os dois primeiros termos da serie: ");
    scanf("%d%d", &t1, &t2);

    // Exibe a mensagem inicial
    printf("Série de Fibonacci até o vigésimo termo:\n");

    printf("%d%d", t1, t2);

    // Laço que calcula e imprime os 20 primeiros termos
    for (int i = 1; i <= 18; i++) {
        // Exibe o termo atual
        printf("%d ", t1);

        // Calcula o próximo termo da série
        proximo = t1 + t2;

        // Atualiza os valores: o segundo termo se torna o primeiro,
        // e o próximo termo calculado se torna o segundo
        t1 = t2;
        t2 = proximo;
    }

    // Quebra de linha ao final da série
    printf("\n");

    return 0; // Indica que o programa foi executado com sucesso
}