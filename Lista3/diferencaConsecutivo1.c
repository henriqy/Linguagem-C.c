#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1, num2 ,num3;
	scanf("%d %d %d", &num1, &num2, &num3);
	
	int valor1  = num2 - num1;
	int valor2 = num3 - num2;
	
	printf("%d %d", abs(valor1), abs(valor2));
	
	
}