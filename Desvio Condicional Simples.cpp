// Desvio Condicional Simples.cpp : Defines the entry point for the console application.
//
/*
	Desvio condicional Simples
	Escreva um programa que leia um numero inteiro qualquer
	Informar se o numero lido e POSITIVO
*/

#include "stdafx.h"
#include "stdlib.h"


int main()
{
	int numero;

	printf("Digite um numero: ");
	scanf_s("%d", &numero);

	// Desvio Condicional Simples
	if (numero > 0)
		printf("Numero lido e: POSITIVO \n");


	system("pause");
    return 0;
}

