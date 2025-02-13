#include <stdio.h> // Biblioteca padrão para entrada/saída

int main() { // Início da função principal
int num1, num2, num3; // Declara três variáveis inteiros

printf("Digite três números:\n"); // Imprime mensagem solicitando números
scanf("%d %d %d", &num1, &num2, &num3); // Lê três números inteiros

ordenar(&num1, &num2, &num3); // Chama função para ordenar números

printf("Ordem crescente: %d, %d, %d\n", num1, num2, num3); // Imprime números ordenados

return 0; // Retorna 0 para indicar execução bem-sucedida
}

void ordenar(int *n1, int *n2, int *n3) {
int temp; // Variável temporária para troca

// Verifica e troca valores para ordenar
if (*n1 > *n2) {
temp = *n1;
*n1 = *n2;
*n2 = temp;
}

if (*n1 > *n3) {
temp = *n1;
*n1 = *n3;
*n3 = temp;
}

if (*n2 > *n3) {
temp = *n2;
*n2 = *n3;
*n3 = temp;
}
}