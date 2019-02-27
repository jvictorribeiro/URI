#include <stdio.h>

int main(){
  int idade, ano=0, mes=0, dia=0;
  scanf("%d", &idade);

  if(idade >= 365){
    ano = idade / 365;
    idade = idade - ano * 365;
    mes = idade /30;
    idade = idade - mes * 30;
    dia = idade;
  } else if(idade >= 30 && idade < 365){
    mes = idade / 30;
    idade = idade - mes * 30;
    dia = idade;
  } else if(idade < 30){
    dia = idade;
  }

  printf("%d ano(s)\n", ano);
  printf("%d mes(es)\n", mes);
  printf("%d dia(s)\n", dia);

  return 0;
}
