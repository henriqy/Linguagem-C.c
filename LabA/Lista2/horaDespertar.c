	#include <stdio.h>

	int main(void){
		int h1, m1, s1;
		int h2, m2, s2;

		scanf("%d %d %d", &h1, &m1, &s1);	
		scanf("%d %d %d", &h2, &m2, &s2);

		int valorH1 = h1 * 3600;
		int valorMin1 = m1 * 60;
		int valorSeg1 = s1;

		int valorH2 = h2 * 3600;
		int valorMin2 = m2 * 60;
		int valorSeg2 = s2;

		int valor1 = valorH1 + valorMin1 + valorSeg1;
		int valor2 = valorH2 + valorMin2 + valorSeg2;

		int valorTotal = valor1 + valor2;

		int valorH = valorTotal/3600;
		valorTotal %= 3600;
		int valorMin = valorTotal / 60;
		valorTotal %= 60;
		int valorSeg = valorTotal;


		if(valorSeg > 59){
			valorSeg = 0;
			valorMin += 1;

			if(valorMin > 59){
				valorMin %= 60;
				valorH += 1;

				if(valorH > 23){
					valorH%=24;
				}
					}

			}else if(valorMin > 59){
				valorMin = 0;
				valorH += 1;

				if(valorH > 23){
					valorH %= 24;

				}
			}else if(valorH > 23){
				valorH %= 24;

			}

		if(valorH < 10 || valorMin < 10 || valorSeg < 10){
			printf("%02d:%02d:%02d", valorH, valorMin, valorSeg);
		}else{
			printf("%d:%d:%d", valorH, valorMin, valorSeg);
		}

		return 0;

	}