// Exercicio 009.cpp : Defines the entry point for the console application.
//

/*
	Exercício 009 - Calcular area do cilindro
	Azeite
*/

#include "stdafx.h"
#include "stdlib.h"


int main()
{
	// Declaracao de variaveis
	float raio, altura, volume;

	// Entrada de dados
	printf("Digite o valor do raio: ");
	scanf_s("%f", &raio);

	printf("Digite o valor da altura: ");
	scanf_s("%f", &altura);

	// Processamento dos dados
	volume = 3.14159 * raio * raio * altura;

	// Saida dos dados
	printf("O volume final e de %.2f \n", volume);

	system("pause");
    return 0;
}

