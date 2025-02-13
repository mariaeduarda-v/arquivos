#include <stdio.h>
#include <math.h> // Biblioteca necessária.

int main(){
    float a, b, c,
          d,
          x1, x2;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    printf("Digite o valor de c: ");
    scanf("%d", &c);
    
    d = pow (b, 2) - 4*a*c;
    x1 = (-b + sqrt(d))/(2*a);
    x2 = (-b - sqrt(d))/(2*a);

    printf("Primeira rais: %d", &x1);
    printf(" Segunda raiz: %d", &x2);

    return 0;

    
}