#include <stdio.h>

int main(){
    float capacidade_do_tanque, consumo_medio, autonomia_restante;
    float litros_abastecidos, quilometragem;

    printf("Qual a capacidade do tanque do carro?");
    scanf("%f", &capacidade_do_tanque);

    printf("Qual a quantidade de litros abastecidos?");
    scanf("%f", &litros_abastecidos);

    printf("Qual foi a quilometragem percorrida?");
    scanf("%f", &quilometragem);

    consumo_medio = quilometragem / litros_abastecidos;

    autonomia_restante = consumo_medio * (capacidade_do_tanque - litros_abastecidos);

    printf("O  carro consome em media %.2f do tanque, a autonomia restante do carro era: %.2f\n", consumo_medio, autonomia_restante);

    return 0;
}