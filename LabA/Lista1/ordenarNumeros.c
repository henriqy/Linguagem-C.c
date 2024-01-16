#include <stdio.h>

int main(void){
	
	int num1, num2, num3;
	int acm;
	
	scanf("%d", &num1);
	acm = num1;	
	
	int maior = num1;
	int menor = num1;
	
	scanf("%d", &num2);
	acm += num2;
	
	if(num2 > maior){
		maior = num2;
	}
	
	if(num2 < menor){
		menor = num2;
		
	}
	
	scanf("%d", &num3);
	acm += num3;
	
	if(num3 > maior){
		maior = num3;
	}
	
	if(num3 < menor){
		menor = num3;
		
	}
	
	int meio = acm - (maior + menor);
	
	printf("%d %d %d", menor, meio, maior);
		
	return 0;
}