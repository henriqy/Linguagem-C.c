#include <stdio.h>

int main(void){
	int atual, maior, menor;
	
	scanf("%d", &atual);
	maior = atual;
	menor = atual;
	
	for(int i = 0; i<10; i++){
		scanf("%d\n", &atual);
		
		if(atual > maior){
			maior = atual;
		}
		
		if(atual < menor){
			menor = atual;
			
		}
		
	}
	 
	printf("%d %d", menor, maior);
	
	return 0;
}