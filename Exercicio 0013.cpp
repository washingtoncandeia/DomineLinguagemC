// Exercicio 0013.cpp : Defines the entry point for the console application.
//
/*
	EXercicio 0013 - Ler um numero

*/
#include "stdafx.h"
#include "stdlib.h"


int main()
{
	int numero;

	// Entrada
	printf("Digite um numero: ");
	scanf_s("%d", &numero);

	// Comparacao 
	if (numero > 1000)
		printf("O numero %d e maior do que 1000! \n", numero);


	system("pause");
    return 0;
}

