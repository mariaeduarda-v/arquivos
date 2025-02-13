#include <stdio.h>
#include <math.h> // Para usar sqrt()

int main() {
    double a, b, c; // Coeficientes da equação
    double delta, x1, x2; // Discriminante e raízes

    // Entrada dos coeficientes
    printf("Digite o valor de a: ");
    scanf("%lf", &a);
    printf("Digite o valor de b: ");
    scanf("%lf", &b);
    printf("Digite o valor de c: ");
    scanf("%lf", &c);

    // Verificar se é uma equação do 2º grau
    if (a == 0) {
        printf("Não é uma equação do 2º grau.\n");
        return 0; // Encerra o programa
    }

    // Calcular o discriminante (delta)
    delta = b * b - 4 * a * c;

    // Analisar as condições para as raízes
    if (delta > 0) {
        // Duas raízes reais e distintas
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("As raízes da equação são reais e distintas:\n");
        printf("x1 = %.2lf\n", x1);
        printf("x2 = %.2lf\n", x2);
    } else if (delta == 0) {
        // Uma raiz real (raiz dupla)
        x1 = -b / (2 * a);
        printf("A equação tem uma raiz real (raiz dupla):\n");
        printf("x1 = x2 = %.2lf\n", x1);
    } else {
        // Delta < 0, sem raízes reais
        printf("A equação não possui raízes reais.\n");
    }

    return 0;
}