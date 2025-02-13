#include <stdio.h>
#include <math.h>

int main(){
    int n;
    double h = 1.0;
    int i;

    printf("Digite o valor de n:");
    scanf("%d", &n);

for (i = 1; i <= n; i++) {
    h += 1.0 / i;
}
    printf("Soma da série harmônica: %.2f\n", h);
    
    return 0;

}