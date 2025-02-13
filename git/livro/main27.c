#include <stdio.h>

int main(){
    int dia, mes;

    printf("Digite o dia do seu aniversario:");
    scanf("%d", &dia);

    printf("Digite o mes do seu aniversario:");
    scanf("%d", &mes);

    if ((mes == 3 && dia >= 21) || (mes == 4 && dia <= 19)){
        printf("Aries\n");
    } else if ((mes == 4 && dia >= 20) || (mes == 5 && dia <= 20))
    {
        printf("Touro\n");
    } else if ((mes == 5 && dia >= 21) || (mes == 6 && dia <= 20))
    {
        printf("Gemeos\n");
    } else if ((mes == 6 && dia >= 21) || (mes == 7 && dia <= 22))
    {
        printf("Cancer\n");
    } else if ((mes == 7 && dia >= 23) || (mes == 8 && dia <= 22))
    {
        printf("Leao\n");
    } else if ((mes == 8 && dia >= 23) || (mes == 9 && dia <= 22))
    {
        printf("Virgem\n");
    } else if ((mes == 9 && dia >= 23) || (mes == 10 && dia <= 22))
    {
       printf("Libra\n");
    } else if ((mes == 10 && dia >= 23) || (mes == 21 && dia <= 11))
    {
        printf("Escorpiao\n");
    } else if ((mes == 11 && dia >= 22) || (mes == 12 && dia <= 21))
    {
        printf("Sagitario\n");
    } else if ((mes == 12 && dia >= 22) || (mes == 1 && dia <= 19))
    {
        printf("Capricornio\n");
    } else if ((mes == 1 && dia >= 20) || (mes == 2 && dia <= 18))
    {
        printf("Aquario\n");
    } else if ((mes == 2 && dia >= 19) || (mes == 3 && dia <= 20))
    { 
        printf("Peixes\n");
    }
    
    return 0;
} 