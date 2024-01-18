#include <stdio.h>

int main(void){
	
	int casosTeste;
	scanf("%d", &casosTeste);
	
	for(int i = 1; i<=casosTeste; i++){
		int dia, temp;
		scanf("%d %d", &dia, &temp);
		
		switch(dia){
				
			case 2:
					if(temp > 23){
					printf("bermuda\n");
					
				}else if(temp < 15){
					printf("F\n");
					
				}else{
					printf("jeans\n");
					}
				break;
				
			case 3: case 5:
				if(temp >= 15){
					printf("jeans\n");	
				}else{
					printf("F\n");
				}
				break;
			case 1: case 4: case 6: case 7:
				if(temp >= 25){
					printf("bermuda\n");
				}else if(temp < 15){
					printf("F\n");
				}else{
					printf("jeans\n");
				}	
				break;
		}
		
		
	}
	
}