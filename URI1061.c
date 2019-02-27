#include <stdio.h>

int main(){
	int d1, hr, min, seg, hrF, minF, segF, d2;
	char dia[4], c;
	scanf("%s %d", &dia, &d1);
	scanf("%d %c %d %c %d ",&hr, &c, &min, &c, &seg);
	scanf("%s %d",&dia, &d2);
	scanf("%d %c %d %c %d ",&hrF, &c, &minF, &c, &segF);
	segF = segF - seg;
	minF = minF - min;
	hrF = hrF - hr;
	d2 = d2 - d1;
	if(segF < 0){
       	segF += 60;
       	minF -= 1;
    }
	if(minF < 0){
       	minF += 60;
       	hrF -= 1;
    }
	if(hrF < 0){
    	hrF += 24;
    	d2 -= 1;
    }
	printf("%d dia(s)\n",d2);
	printf("%d hora(s)\n",hrF);
	printf("%d minuto(s)\n",minF);
	printf("%d segundo(s)\n",segF);
	return 0;	
}
