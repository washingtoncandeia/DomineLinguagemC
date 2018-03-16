// Laço_de_repetiçao_for.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int numero, resultado;

	for (int i = 0; i < 5; i++)  // O bloco abaixo incrementará 1 vez, 
                                  // testará até 5x,
                                  // Se for verdade, o bloco abaixo continua executando.

	{
		printf("Digite um numero: ");
		scanf_s("%d", &numero);
		resultado = numero * 3;
		printf("O resultado e: %d \n", resultado);
	}

    return 0;
}

