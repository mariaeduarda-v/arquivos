#include <stdio.h>

int main(){
    int dia, mes, ano;
    int dia_atual, mes_atual, ano_atual;
    int idade_atual_em_dias, idade_atual_em_meses, idade_atual_em_anos;

    printf("Digite o dia do seu nascimento:");
    scanf("%d", &dia);

    printf("Digite o mes do seu nascimento:");
    scanf("%d", &mes);

    printf("Digite o ano do seu nascimento:");
    scanf("%d", &ano);

    printf("Digite o dia atual:");
    scanf("%d", &dia_atual);

    printf("Digite o mes atual:");
    scanf("%d", &mes_atual);

    printf("Digite o ano atual:");
    scanf("%d", &ano_atual);

    idade_atual_em_anos = ano_atual - ano;
    if (mes_atual < mes || (mes_atual == mes && dia_atual < dia)){
        idade_atual_em_anos--;
    }

    idade_atual_em_meses = (ano_atual * 12 + mes_atual) - (ano * 12 + mes);
    if (dia_atual < dia){
        idade_atual_em_meses--;
    }

    idade_atual_em_dias = idade_atual_em_meses * 30 + (dia_atual - dia);

    // Exibindo os resultados
    printf("\nIdade em anos: %d\n", idade_atual_em_anos);
    printf("Idade em meses: %d\n", idade_atual_em_meses);
    printf("Idade em dias: %d\n", idade_atual_em_dias);

    return 0;
}