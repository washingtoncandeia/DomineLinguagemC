// Exercicio_0027.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	// Declarar variaveis
	int numero, somaPos, somaNeg, zeros;
	somaPos = somaNeg = zeros = 0;

	// For loop
	for (int i = 0; i < 20; i++)
	{
		printf("Digite um numero: ");
		scanf_s("%d", &numero);

		if (numero > 0)
			somaPos = somaPos + numero;
		else if (numero < 0)
			somaNeg = somaNeg + numero;
		else
			zeros++;
	}

	// Mostrar na tela
	printf("A soma de positivos:........%d \n", somaPos);
	printf("A soma de negativos:........%d \n", somaNeg);
	printf("A soma dos zeros:...........%d \n", zeros);

    return 0;
}

