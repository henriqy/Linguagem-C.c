#include <stdio.h>

int main(void){

	int M, Y;
	
	scanf("%d %d", &M, &Y);
	
	while(M != 0 && Y != 0){
		
		
		switch(M){
			case 1 :
				printf("31");
				break;
				
			case 2:
				if((Y % 400 == 0) || (Y % 4 == 0 && Y % 100 != 0)){
					printf("29");
					break;
				}else{
					printf("28");
					break;
				}
				
				
			case 3:
				printf("31");
				break;
			
			case 4:
				printf("30");
				break;
				
			case 5:
				printf("31");
				break;
				
			case 6:
				printf("30");
				break;
				
			case 7:
				printf("31");
				break;
				
			case 8:
				printf("31");
				break;
				
			case 9:
				printf("30");
				break;
				
			case 10:
				
				printf("31");
				break;
				
			case 11:
				printf("30");
				break;
				
			case 12:
				printf("31");
				break;
				
		}
		printf("\n");
		
		scanf("%d %d", &M, &Y);
		
	}
	
	return 0;
	
}