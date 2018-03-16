// Operadores Relacionais.cpp : Defines the entry point for the console application.
//
/*
	Aula 56 - Comparar dois numeros inteiros
*/
#include "stdafx.h"
#include "stdlib.h"


int main()
{
	// Declaracao de variaveis
	int valorA, valorB;

	// Usando os valores
	printf("Digite um valor: ");
	scanf_s("%d", &valorA);
	printf("Digite outro valor: ");
	scanf_s("%d", &valorB);

	// Teste propriamente
	printf("valorA >  valorB resulta em %d \n", valorA >  valorB);
	printf("valorA >= valorB resulta em %d \n", valorA >= valorB);
	printf("valorA <  valorB resulta em %d \n", valorA <  valorB);
	printf("valorA <= valorB resulta em %d \n", valorA <= valorB);
	printf("valorA == valorB resulta em %d \n", valorA == valorB);
	printf("valorA != valorB resulta em %d \n", valorA != valorB);


	system("pause");
    return 0;
}

