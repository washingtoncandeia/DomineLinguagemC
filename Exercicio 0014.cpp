// Exercicio 0014.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int valorA, valorB;

	printf("Digite um numero: ");
	scanf_s("%d", &valorA);
	printf("Digiteum segundo numero: ");
	scanf_s("%d", &valorB);

	// Desvio Condicional Composto
	if (valorA > valorB)
		printf("Valor: %d \n", valorA);
	else
		printf("Valor: %d \n", valorB);


    return 0;
}

