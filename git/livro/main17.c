#include <stdio.h>

int main() {
    // Variáveis para armazenar os termos da série
    int t1 = 0, t2 = 1, proximo;

    // Exibe a mensagem inicial
    printf("Série de Fibonacci até o vigésimo termo:\n");

    // Laço que calcula e imprime os 20 primeiros termos
    for (int i = 1; i <= 20; i++) {
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