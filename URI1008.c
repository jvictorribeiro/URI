#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int n, hr;
    double ghr, salario;
    scanf("%d",&n);
    scanf("%d",&hr);
    scanf("%lf",&ghr);
    salario = hr * ghr;
    printf("NUMBER = %d\n", n);
    printf("SALARY = U$ %.2lf\n", salario);
    return 0;
}
