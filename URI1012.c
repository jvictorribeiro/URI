#include <stdio.h>

double pi = 3.14159;

int main(){
  double a, b, c;
  scanf("%lf", &a);
  scanf("%lf", &b);
  scanf("%lf", &c);

  printf("TRIANGULO: %.3f\n", (a*c)/2);
  printf("CIRCULO: %.3f\n", pi*c*c);
  printf("TRAPEZIO: %.3f\n", (c*(a+b))/2);
  printf("QUADRADO: %.3f\n", b*b);
  printf("RETANGULO: %.3f\n", a*b);
  return 0;
}
