#include <stdio.h>

int main() {
    int idade, soma = 0, contPessoas = 0;

    while (1) {
        printf("Digite a idade (ou 0 para encerrar): ");
        scanf("%d", &idade);

        if (idade == 0) {
            break; // encerra o laço
        }

        if (idade < 0) {
            printf("Não existe idade negativa! Tente novamente... \n");
            continue;
        }

        soma += idade;
        contPessoas++;
    }
     


}