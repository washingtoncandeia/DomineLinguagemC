// Exercicio 0021.cpp : Defines the entry point for the console application.
//
/*
Desvio condiconal de multiplos casos
switch()
Exercício 0021 - Desvio Condicional de Múltiplos Casos
*/

#include "stdafx.h"


int main()
{
	int codigo;

	printf("Digite o codigo: ");
	scanf_s("%d", &codigo);

	// Usando switch
	switch (codigo)
	{
	case 1:
		printf("Panela \n");
		break;
	case 2:
		printf("Chaleira \n");
		break;
	case 3:
		printf("Prato \n");
		break;
	default:
		printf("O codigo digitado invalido! \n");
		break;
	}


    return 0;
}

