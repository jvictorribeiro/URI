#include <stdio.h>

int main(){
  int n, hr = 0, min = 0, seg = 0;
  scanf("%d", &n);

  if(n >= 3600){
    hr = n / 3600;
    n = n - hr * 3600;
    min = n / 60;
    n = n - min * 60;
    seg = n;
  } else if(n >= 60 && n < 3600){
    min = n / 60;
    n = n - min * 60;
    seg = n;
  } else if(n < 60){
    seg = n;
  }

  printf("%d:%d:%d\n",hr, min, seg);

  return 0;

}
