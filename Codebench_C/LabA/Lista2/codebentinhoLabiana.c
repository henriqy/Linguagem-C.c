#include <stdio.h>

int main(void){
	int pc, dc, dl;
	
	scanf("%d\n", &pc);
	scanf("%d, %d\n", &dc, &dl);
	
	int somaDedos = dc + dl;
	
	if(pc == 1){
		if(somaDedos % 2 != 0){
			printf("Labiana venceu\n");
		}else{
			
			printf("Codibentinho venceu\n");
			
		}
		
	}else{
		if(somaDedos % 2 == 0){
			printf("Codibentinho venceu\n");
		}else {
			printf("Labiana venceu\n");
		}
	}
	
	return 0;
}