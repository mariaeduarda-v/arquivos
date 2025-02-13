#include <stdio.h>
#define _USE_MATH_DEFINES // Define o pi.
#include <math.h> // Biblioteca necessária.

int main(){
    double r, v;
    
    printf("Digite o raio da esfera: ");
    scanf("%lf", &r);

    v = (4.0 / 3.0) * M_PI * pow(r, 3);

    printf("O volume da esfera com raio %.2lf e %.2lf\n", r, v);

    return 0;
}