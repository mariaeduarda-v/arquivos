#include <stdio.h>

int main(){
    int dia, mes, ano;

    printf("Digite um dia:");
    scanf("%d", &dia);

    printf("Digite um mes(em numero):");
    scanf("%d", &mes);

    printf("Digite um ano:");
    scanf("%d", &ano);

    if (dia <= 31){
        printf("Valido!"); }
        else {
            printf("Invalido!");
    }
    
    if (mes <= 12){
        printf("Valido!");}
        else {
            printf("Ivalido!");
    }
    
    if (ano <= 2025){
        printf("Valido!");}
        else{
            printf("Ivalido");    
    }

    return 0;

}