#include <stdio.h>

int main(void)
{
	int i, n, resultado = 1;
	
	printf("digite o numero inteiro positivo a ser fatorado:\n");
	scanf("%i", &n);
	
	for(i = 0; i<n; i++)
	{
		printf("\n %i x %i", resultado, (n - i));
		resultado = resultado*(n-i);
		printf("\n resultado = %i", resultado);
	}
	
	printf("\n o resultado sera: %i", resultado);
}
