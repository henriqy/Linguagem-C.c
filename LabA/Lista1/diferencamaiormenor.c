#include <stdio.h>

int main(void){
	int n1, n2, n3;
	scanf("%d %d %d", &n1, &n2, &n3);
	
	int maior = n1;
	int menor = n1;
	
	if(maior < n2){
		maior = n2;
		
	}
	if(maior < n3){
		maior = n3;
			
	}
	
	if(menor > n2){
		menor = n2; 
		
	}
	
	if(menor > n3){
		menor = n3;
	}
	
	int diferenca = maior - menor;
	
	printf("%d", diferenca);
	
	return 0;
}