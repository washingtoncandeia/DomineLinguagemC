// Desvio Condicional Encadeado.cpp : Defines the entry point for the console application.
//
/*
	Aula 69
	Desvio Condicional Encadeado
*/

#include "stdafx.h"


int main()
{
	int numero;

	printf("Digite um numero: ");
	scanf_s("%d", &numero);

	if (numero > 0)
		printf("POSITIVO \n");
	else if (numero <0)
		printf("NEGATIVO \n");
	else
		printf("ZERO \n");
	

    return 0;
}

