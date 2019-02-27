#include <stdio.h>

int main(){
  int x;
  float y, consumoM;

  scanf("%d", &x);
  scanf("%f", &y);
  consumoM = x / y;

  printf("%.3f km/l\n", consumoM);

  return 0;
}
