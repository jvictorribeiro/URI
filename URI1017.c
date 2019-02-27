#include <stdio.h>

int main(){
  int tg, vm;
  double litros;
  scanf("%d", &tg);
  scanf("%d", &vm);
  litros = (tg*vm)/12.0;
  printf("%.3lf\n", litros);
  return 0;
}
