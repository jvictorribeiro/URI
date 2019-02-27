#include <stdio.h>
 
int main() {
    int p, np, p2, np2;
    double valor, valor2, total;
    
    scanf("%d %d %lf", &p, &np, &valor);
    scanf("%d %d %lf", &p2, &np2, &valor2);
    total = ((np * valor) + (np2 * valor2));
    printf("VALOR A PAGAR: R$ %.2lf\n",total);
}
