// Exercicio 0016.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"


int main()
{
	// Atribuicao de variaveis
	float num1, num2, diviMaior;

	// Inicio - Ler
	printf("Digite um numero: ");
	scanf_s("%f", &num1);
	printf("Digite outro numero: ");
	scanf_s("%f", &num2);

	// Desvio Condicional Composto
	if (num1 > num2)
		diviMaior = num1 / num2;
	else
		diviMaior = num2 / num1;

	// Apresentar - escreva
	printf("A divisao eh: %.2f \n", diviMaior);

	system("pause");
    return 0;
}

