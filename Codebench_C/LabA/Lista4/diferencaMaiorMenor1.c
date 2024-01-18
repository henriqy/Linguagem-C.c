#include <stdio.h>

int main(void)
{
	int numcasos;
	int n1, n2, n3, maior, menor;
	
	scanf("%d", &numcasos);
	
	
	for (int i = 0; i < numcasos; i++) {
		scanf("%d %d %d", &n1, &n2, &n3);
		
		
		maior = n1;
		menor = n1;
		
		if(n2 > maior ){
			maior = n2;
		}
		
		if(n3 > maior){
			maior = n3;
		}
		
		if(n2 < menor){
			menor = n2;
	
		}
		
		if(n3 < menor){
			menor = n3;
		}
		
		printf("%d\n", (maior-menor));
		
	}
	return 0;
}