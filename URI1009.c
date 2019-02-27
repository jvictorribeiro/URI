#include <stdio.h>

int main(){
    char nome[100];
    double sf, montante, total;

    scanf("%s\n", nome);
    scanf("%lf", &sf);
    scanf("%lf", &montante);
    total = sf + (0.15 * montante);

    printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}
