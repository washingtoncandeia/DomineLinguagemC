// Desvio Condicional Composto.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int num;

	// Entrada
	printf("Digite um numero:............");
	scanf_s("%d", &num);

	// Desvio Condicional Composto
	if (num > 0)
		printf("POSITIVO \n");
	else
		printf("NEGATIVO \n");

    return 0;
}

