#include <stdio.h>

int main(void){
	int hora1, min1, seg1;
	int hora2, min2, seg2;

	scanf("%d:%d:%d", &hora1, &min1, &seg1);
	scanf("%d:%d:%d", &hora2, &min2, &seg2);

	int valorHora1 = hora1 * 60 * 60;
	int valorMin1 = min1 * 60;
	int valorSeg1 = seg1;


	int valorHora2 = hora2 * 60 * 60;
	int valorMin2 = min2 * 60;
	int valorSeg2 = seg2;

	int total1 = valorHora1 + valorMin1 + valorSeg1;
	int total2 = valorHora2 + valorMin2 + valorSeg2;

	int diferenca = total2 - total1;

	printf("%d", diferenca);

	return 0;
}