#include <stdio.h>

int main(void){
	int vg, vs, vn;
	int pg, ps, pn;
	
	scanf("%d %d %d", &vg, &vs, &vn);
	scanf("%d %d %d", &pg, &ps, &pn);
	
	int valorProdutoG = vg * 29 * 17;  
	int valorProdutoS = vs * 29;
	int valorProdutoN = vn;
	
	int valorProdutoTotal = valorProdutoG + valorProdutoS + valorProdutoN;
	
	int valorPagamentoG = pg * 29 * 17;
	int valorPagamentoS = ps * 29;
	int valorPagamentoN = pn;
	
	int valorPagamentoTotal = valorPagamentoG + valorPagamentoS + valorPagamentoN;
	
	int valorTroco = valorPagamentoTotal - valorProdutoTotal;
	
	int trocoG = valorTroco / (29 * 17);
	valorTroco %= (29*17);
	int trocoS = valorTroco/ 29;
	valorTroco %= 29;
	int trocoN = valorTroco;
	
	printf("Seu troco eh %d galeoes, %d sicles e %d nuques, Harry!", trocoG, trocoS, trocoN);
	
}