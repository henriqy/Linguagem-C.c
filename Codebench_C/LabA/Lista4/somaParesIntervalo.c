#include <stdio.h>

void somaPares(int inicio, int fim){
	int somaPar = 0;
	int aux;
	
	if(inicio > fim){
		fim = aux;
		fim = inicio;
		inicio = aux;
	}
	
	for(int i = inicio; i <= fim; i++){
		if(i % 2 == 0){
			somaPar+=i;
		}
		
	}
	
	printf("%d\n", somaPar);
	
}

int main(void){
	
	int inicio, fim;
	
	scanf("%d %d", &inicio, &fim);
	
	while(inicio >= 0 && fim > 0){
		somaPares(inicio, fim);
		scanf("%d %d", &inicio, &fim);
	}
	
	return 0;
	
}