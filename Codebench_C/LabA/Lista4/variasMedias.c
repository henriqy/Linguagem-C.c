#include <stdio.h>

int main(void){

	int N;
	float num, acm, media;
	
	scanf("%d", &N);
	
	while(N != 0){
		for(int i = 1; i <= N; i++){
			scanf("%f",&num);
			
			acm+=num;
			
		}
		
		media = (float) acm / N;
		printf("%.2f\n", media);
		acm = 0;
		scanf("%d", &N);
		
	}
	
	
		
	
}