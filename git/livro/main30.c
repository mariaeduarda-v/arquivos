#include <stdio.h>
#include <string.h> // Para usar strcmp()

int main() {
    char resposta[4]; // Para armazenar "sim" ou "nao"

    printf("O animal é um mamífero? (sim/nao): ");
    scanf("%3s", resposta);

    if (strcmp(resposta, "sim") == 0) {
        printf("O animal é quadrúpede? (sim/nao): ");
        scanf("%3s", resposta);

        if (strcmp(resposta, "sim") == 0) {
            printf("O animal é carnívoro? (sim/nao): ");
            scanf("%3s", resposta);

            if (strcmp(resposta, "sim") == 0) {
                printf("O animal escolhido é o leão!\n");
            } else {
                printf("O animal é herbívoro? (sim/nao): ");
                scanf("%3s", resposta);

                if (strcmp(resposta, "sim") == 0) {
                    printf("O animal escolhido é o cavalo.\n");
                } else {
                    printf("Resposta inválida, tente novamente.\n");
                }
            }
        } else {
            printf("O animal anda sobre duas patas? (sim/nao): ");
            scanf("%3s", resposta);

            if (strcmp(resposta, "sim") == 0) {
                printf("O animal é um primata? (sim/nao): ");
                scanf("%3s", resposta);

                if (strcmp(resposta, "sim") == 0) {
                    printf("O animal escolhido é o homem ou macaco.\n");
                } else {
                    printf("O animal escolhido é o morcego.\n");
                }
            } else {
                printf("O animal vive na água? (sim/nao): ");
                scanf("%3s", resposta);

                if (strcmp(resposta, "sim") == 0) {
                    printf("O animal escolhido é a baleia.\n");
                } else {
                    printf("Animal não identificado.\n");
                }
            }
        }
    } else {
        printf("O animal é uma ave? (sim/nao): ");
        scanf("%3s", resposta);

        if (strcmp(resposta, "sim") == 0) {
            printf("O animal é uma ave que não voa? (sim/nao): ");
            scanf("%3s", resposta);

            if (strcmp(resposta, "sim") == 0) {
                printf("O animal é maior que um pinguim? (sim/nao): ");
                scanf("%3s", resposta);

                if (strcmp(resposta, "sim") == 0) {
                    printf("O animal escolhido é o avestruz.\n");
                } else {
                    printf("O animal escolhido é o pinguim.\n");
                }
            } else {
                printf("O animal vive na água? (sim/nao): ");
                scanf("%3s", resposta);

                if (strcmp(resposta, "sim") == 0) {
                    printf("O animal escolhido é o pato.\n");
                } else {
                    printf("O animal escolhido é a águia.\n");
                }
            }
        } else {
            printf("O animal é um réptil? (sim/nao): ");
            scanf("%3s", resposta);

            if (strcmp(resposta, "sim") == 0) {
                printf("O animal vive na água? (sim/nao): ");
                scanf("%3s", resposta);

                if (strcmp(resposta, "sim") == 0) {
                    printf("O animal escolhido é o crocodilo.\n");
                } else {
                    printf("O animal escolhido é a cobra.\n");
                }
            } else {
                printf("O animal é um anfíbio ou não identificado neste programa.\n");
            }
        }
    }

    return 0;
}