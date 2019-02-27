#include <stdio.h>
#include <math.h>

int main(){
  double x1, y1, x2, y2, d1, d2, d3, d4;
  scanf("%lf %lf",&x1, &y1);
  scanf("%lf %lf",&x2, &y2);

  d1 = (x2-x1) * (x2-x1);
  d2 = (y2-y1) * (y2-y1);
  d3 = d1 + d2;
  d4 = sqrt(d3);
  printf("%.4lf\n",d4);

  return 0;
}
