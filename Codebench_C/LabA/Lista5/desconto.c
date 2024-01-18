#include <stdio.h>

int main(void){
	float desconto, custoMin;
	int N;
	
	scanf("%f %f", &desconto, &custoMin);
	scanf("%d", &N);
	
	float compra, descontado, total;
	for(int i = 1; i <= N; i++){ 
		scanf("%f", &compra);
		
		if(compra >= custoMin){
			descontado = compra - (compra * (desconto/100));
		}else{
			descontado = compra;
		}
		
		total+=descontado;
		
	}
	printf("%.2f", total);
	
	return 0;
}