#include <stdio.h>

int main(){
	printf("******************************************\n");
	printf("* bem vindo ao nosso jogo de advinhacao *\n");
	printf("******************************************\n");

	int numerosecreto = 42;

	int chute;

	printf("Qual eh seu chute?");
	scanf("%d",&chute);
	printf("Seu chute foi %d",chute);
}