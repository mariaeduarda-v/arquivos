#include <stdio.h>
#define _USE_MATH_DEFINES// Define o PI!!!!!!!
#include <math.h>

int main(){
    float r, a;

    printf("Digite o raio do circulo: ");
    scanf("%f", &r);

    a = M_PI * r * r;

    printf("A area do circulo com raio %.2f é aproximadamente: %.2f\n", r, a);

    return 0;
}