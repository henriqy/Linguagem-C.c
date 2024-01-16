#include <stdio.h>

int main(void){
	int hora, min, seg;
	scanf("%d %d %d", &hora, &min , &seg);
	
	int valorHora = hora * 60 * 60;
	int valorMin = min * 60;
	int valorSeg = seg;
	
	int total = valorHora + valorMin +valorSeg;
	
	printf("%d", total);
	
	return 0;
	
}