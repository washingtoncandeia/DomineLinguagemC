// Exercicio 0017.cpp : Defines the entry point for the console application.
//
/*
	Exercicio 0017 - Despesa / Receita
*/
#include "stdafx.h"


int main()
{
	float receita, despesa;

	printf("Digite a receita da empresa no ano anterior: ");
	scanf_s("%f", &receita);
	printf("Digite a despesa da empresa no ano anterior: ");
	scanf_s("%f", &despesa);

	// Desvio Condicional Composto
	if (receita > despesa)
		printf("LUCRO \n");
	else
		printf("PREJUIZO \n");

    return 0;
}

