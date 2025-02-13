#include <stdio.h>

int main(){
    int idade;

    printf("Digite sua idade:");
    scanf("%d", &idade);
    
    if (idade < 16){
        printf("Nao votante!");
    } else if (idade >= 18 && idade <= 65)
    {
        printf("Eleitor obrigatorio!");
    } else if ((idade >= 16 && idade <= 17) || (idade > 65))
    {
        printf("Eleitor facultativo!");
    }
    
    return 0;
}