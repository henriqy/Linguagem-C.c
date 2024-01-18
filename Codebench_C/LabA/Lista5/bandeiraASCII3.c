#include <stdio.h>
int main(void){
	
	int N;
	scanf("%d", &N);

	for(int i = 1; i <= 5*N+2; i++){
		printf("-");

	}
	printf("\n");
	
	for(int i = 1; i <= 3*N; i++){
		printf("|");
		for(int j = 1; j <= 2*N; j++){
			printf("#");

		}
		for(int k = 1; k <= 3*N; k++){
			printf(".");
		}
		printf("|");
		
		printf("\n");
	}
	
	for(int i = 1; i <= 5*N+2; i++){
		printf("-");

	}
	printf("\n");
		
	
	return 0;
	
}