#include <stdio.h>

int main(){
    int classificacao,
        quantidade_m_bronze, quantidade_m_prata, quantidade_m_ouro,
        m_bronze, m_prata, m_ouro,
        bronze, prata, ouro;
    char pais;

    printf("Digite o pais:");
    scanf(" %c", &pais);

    bronze = 1;
    prata = 2;
    ouro = 3;

    printf("Digite o quantas medalhas de bronze:");
    scanf("%d", &m_bronze);

    printf("Digite o quantas medalhas de prata:");
    scanf("%d", &m_prata);

    printf("Digite o quantas medalhas de ouro:");
    scanf("%d", &m_ouro);

    quantidade_m_bronze = m_bronze * bronze;
    quantidade_m_prata = m_prata * prata;
    quantidade_m_ouro = m_ouro * ouro;

    classificacao = quantidade_m_bronze + quantidade_m_prata + quantidade_m_ouro;

    printf("A classificacao de %c e: %d\n", pais, classificacao);
    
    return 0;
}