#include <stdio.h>

int main(void){
	int s;
	scanf("%d", &s);
	int valorHora;
	int valorMin;
	int valorSeg;
	
	valorHora = s/3600;
	s %= 3600;
	valorMin = s/60;
	valorSeg = s % 60;
	
	if(valorHora < 10 || valorMin < 10 || valorSeg < 10){
		printf("%02d:%02d:%02d",valorHora, valorMin, valorSeg);
	}else{
		printf("%d:%d:%d",valorHora, valorMin, valorSeg);	
	}
	
	return 0;
	
}