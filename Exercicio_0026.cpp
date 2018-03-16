// Exercicio_0026.cpp : Defines the entry point for the console application.
// Exercicio 0026
// Escrever um programa que leia 10 valores inteiros
// Escrever no final a soma dos valores lidos

#include "stdafx.h"


int main()
{
	// Declarar variaveis
	int val, soma = 0;  // A variavel soma e zero

	// For loop
	for (int i = 0; i < 10; i++)  // Tem de ser menor que 10, pois inicia em zero
	{
		printf("Digite um numero: \n");
		scanf_s("%d", &val);
		soma = soma + val;
	
	}
	printf("A soma dos valores e:..........%d \n", soma);
	
	return 0;
}

