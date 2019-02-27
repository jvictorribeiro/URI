#include <stdio.h>

int main(){
	int n, num, i, cont1=0, cont2=0, cont3=0, cont4=0;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &num);
		if(num % 2 == 0){
			cont1++;
		}
		if(num % 3 == 0){
			cont2++;
		}
		if(num % 4 == 0){
			cont3++;
		}
		if(num % 5 == 0){
			cont4++;
		}
	}
	printf("%d Multiplo(s) de 2\n", cont1);
	printf("%d Multiplo(s) de 3\n", cont2);
	printf("%d Multiplo(s) de 4\n", cont3);	
	printf("%d Multiplo(s) de 5\n", cont4);
	return 0;	
}
