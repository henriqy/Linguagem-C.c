#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int atual, anterior;
	int i, diferenca;
	
	scanf("%d", &anterior);
	
	for(i = 0; i < 9; i++){
		scanf("%d", &atual);
		
		diferenca = abs(atual - anterior);
		
		printf("%d\n", diferenca);
		
		anterior = atual;
	}
	
	return 0;
	
}