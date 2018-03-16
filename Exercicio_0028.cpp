// Exercicio_0028.cpp : Defines the entry point for the console application.
//
/*
Exercicio 0026
Escrever um programa que apresente no final a soma
de numeros de 1 ate 100 (resposta: 5050)
*/
#include "stdafx.h"


int main()
{
	int soma = 0;
	
	for (int i = 1; i <= 100; i++) 

	{
		soma = soma + i;
		printf("%d \n", i);
	}

	printf("A soma de 1 a 100 e:.........%d \n", soma);
    return 0;
}

