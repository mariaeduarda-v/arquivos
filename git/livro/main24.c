#include <stdio.h>

int main(){
    float prestacao_em_atraso, valor_acrescimo, valor_final, prejuizo;

    printf("Digite o valor da prestacao em atraso:");
    scanf("%f", &prestacao_em_atraso);

    valor_acrescimo = prestacao_em_atraso + 10 * 1.10;

    valor_final = valor_acrescimo - 0.90;

    prejuizo = valor_acrescimo - valor_final;

    printf("O valor final ficou: %.2f", valor_final);
    printf("O prejuizo foi: %.2f", prejuizo);

    return 0;
}