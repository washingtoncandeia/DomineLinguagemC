// Exercicio 0015.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int valorA;

	printf("Digite um numero: ");
	scanf_s("%d", &valorA);

	// Desvio Condicional Composto
	if (valorA != 1000)
		printf("O numero eh diferente de 1000 \n");
	else
		printf("O numero eh igual a 1000 \n");

    return 0;
}

