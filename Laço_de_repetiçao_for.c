#include <stdio.h>

int main(void)
{
	int numero, resultado;
	for (int i = 0; i < 5; i++)
	
	{
		printf("Digite um numero: ");
		scanf("%d", &numero);
		resultado = numero * 3;
		printf("O resultado e: %d \n", resultado);

	}

	return 0;
}
