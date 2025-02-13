#include <stdio.h>
#include <math.h> // Biblioteca necessária.

int main(){
    double x1, y1,
           x2, y2,
           d;
    
    printf("Digite as coordenadas de P (x1, y1): ");
    scanf("%d", &x1, &y1);

    printf("Digite as coordenadas de Q (x2, y2): ");
    scanf("%d", &x2, &y2);

    d = sqrt(pow(x2-x1,2) + pow(y2-y1,2));

    printf("A distancia de entre P(%.2lf, %.2lf) e Q(%.2lf, %2.lf) é %.2lf\n", x1, y1, x2, y2, d);

    return 0;
}
