#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	printf("\n\n");


	printf(" 	  	    	  P  /_\\  P                             		\n");
	printf(" 	  	    	 /_\\_|_|_/_\\                           		\n");
	printf("  			  n_n | ||. .|| | n_n         Bem vindo ao   		\n");
	printf("  			  |_|_|nnnn nnnn|_|_|     Jogo de Adivinhação!		\n");
	printf("  			|" "  |  |_|  |"  " |                       		\n");
	printf("   			|_____| ' _ ' |_____|                      			\n"); 
	printf("      			  \\__|_|__/									\n");

	printf("\n\n");

			

	int segundos = time(0);
	srand(segundos);

	int numerogrande = rand();

	int numerosecreto = numerogrande % 100;

	int chute;

	int tentativas = 0;

	double pontos = 1000;

	int acertou;

	int nivel;
	printf("Qual nivel de dificuldade?\n");
	printf("(1) Facil (2) Medio (3) Dificil\n\n");
	printf("Escolha: ");
	scanf("%d", &nivel);

	int numerodetentativas;

	switch(nivel){
		case 1:
			numerodetentativas = 20;
			break;

		case 2:
			numerodetentativas = 15;
			break;

		default:
			numerodetentativas = 6;
			break;


	}

	for(int i = 0; i<=numerodetentativas; i++){

		printf("tentativa %d de %d\n",i, tentativas);
		printf("Qual eh seu chute?\n");

		scanf("%d",&chute);
		printf("Seu chute foi %d\n",chute);

		if(chute < 0){
			printf("voce nao pode chutar numeros negativos!");
			continue;

		}

		 acertou = (chute == numerosecreto);
		
		if(acertou){
			break;
		} 

		else if(chute > numerosecreto){

			printf("\nseu chute foi maior que o numero secreto\n\n");
		} 

		else{
			printf("\nseu chute foi menor que o numero secreto\n\n");
		}

		tentativas++;

		double pontosperdidos = abs(chute - numerosecreto)/(double)2;
		pontos = pontos - pontosperdidos;


	}

	printf("Fim de Jogo!\n");

	if(acertou){

		printf("\n\n");

		printf("			OOOOOOOOOOO               	\n");
		printf("        OOOOOOOOOOOOOOOOOOO            	\n");
		printf("     OOOOOO  OOOOOOOOO  OOOOOO         	\n");
		printf("    OOOOOO      OOOOO      OOOOOO      	\n");
		printf(" OOOOOOOO  #   OOOOO  #   OOOOOOOO     	\n");
		printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO    \n");
		printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO   \n");
		printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO   \n");
		printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
		printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO    \n");
		printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO     \n");
		printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO      \n");
		printf("     OOOOOO   OOOOOOOOO   OOOOOO       	\n");
		printf("         OOOOOO         OOOOOO          \n");
		printf("             OOOOOOOOOOOO 				\n");

		printf("\n\n");

		printf("Voce ganhou!");
		printf("voce acertou em %d tentativas \n", tentativas);
		printf("Total de pontos: %.2f", pontos);

	}else{
		printf("Voce perdeu!\n");

		printf("\n\n");

		printf("  \\|/ ____ \\|/      	\n"); 
		printf("   @~/ ,. \\~@       	\n");  
		printf("  /_( \\__/ )_\\      	\n"); 
		printf("     \\__U_/			\n"); 

		printf("\n\n");

	}
	
	
}
