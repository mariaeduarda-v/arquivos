#include <stdio.h>
int e_primo(int n) { // Definição da função eh_primo
    if (n <= 1) return 0; // Números menores/iguais a 1 não são primos
    for (int i = 2; i * i <= n; i++) { // Loop de verificação de divisibilidade
        if (n % i == 0) return 0; // Se encontrar divisor, não é primo
    }
    return 1; // Se não encontrar divisores, é primo
}
int main(){
    int n;

    printf("Digite um numero:");
    scanf("%d", &n);

   if (e_primo(n)){
    printf("%d é um número primo!\n", n);
} else {
    printf("%d não é um número primo!\n", n);
}
    return 0;
}