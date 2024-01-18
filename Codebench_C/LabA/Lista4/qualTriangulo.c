#include <math.h>
#include <stdio.h>

int main(void)
{
	float a, b, c;
	
	scanf("%f %f %f", &a, &b, &c);
	
	int testeDiminuiA = fabsf(b - c);
	int testeSomaA = b + c;
	
	int testeDiminuiB = fabsf(a - c); 
	int testeSomaB = a + c;
	
	int testeDiminuiC = fabsf(a - b);
	int testeSomaC = a + b;
	
	if((testeDiminuiA < a && testeSomaA > a) && (testeDiminuiB < b && testeSomaB > b) && (testeDiminuiC < c && testeSomaC > c) ){
		if((a == b) && (b == c)){
			printf("triangulo equilatero");
			
		}else if((a == b) ||(a == c) || (c == b)){
			printf("triangulo isosceles");
			
		}else{
			printf("triangulo escaleno");
		}
		
	}else{
		printf("nao forma triangulo");
	}
	return 0;
	
}