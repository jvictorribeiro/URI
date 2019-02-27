#include <stdio.h>
 
int main() {
    float nota1, nota2;
    scanf("%f",&nota1);
    while(nota1<0 || nota1>10){
        printf("nota invalida\n");
        scanf("%f",&nota1);
    }
    scanf("%f",&nota2);
    while(nota2<0 || nota2>10){
        printf("nota invalida\n");
        scanf("%f",&nota2);
    }
    printf("media = %.2f\n",(nota1+nota2)/2);
    return 0;
}
