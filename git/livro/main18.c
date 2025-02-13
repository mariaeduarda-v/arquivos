#include <stdio.h>

int main() {
    int n[20];

    for (int i = 0; i < 20; i++){
        printf("Digite o numero %d: ", i + 1);// Mensagem para o usuário.
        scanf("%d", &n[i]);// Lê o número e armazena no array.
    }
    int maior = n[0];//Declaraçâo de variável para armazenar o maior valor.
    int menor = n[0];//Declaraçâo de variável para armazenar o menor valor.

    for (int i = 0; i < 20; i++){
        if (n[i] > maior){
            maior = n[i];
        }// Loop for para percorrer o array e comparar os valores.
        if (n[i] < menor){
            menor = n[i];
        }
    }
    printf("O maior numero e:%d\n", maior);
    printf("O menor numero e:%d\n", menor);

    return 0;
}