// Exercicio 0010.cpp : Defines the entry point for the console application.
//
/*
	Exercicio 0010 - Receita e Despesa
	variaveis declaradas - receita, despesa, lucro;
	tipo float
*/

#include "stdafx.h"
#include "stdlib.h"


int main()
{
	float receita, despesa, lucro;

	printf("Digite o valor de receita da empresa: ");
	scanf_s("%f", &receita);

	printf("Digite o valor das despesas da empresa: ");
	scanf_s("%f", &despesa);

	// Processamento dos dados
	lucro = receita - despesa;

	// Saida
	printf("O lucro da empresa neste ano foi R$%.2f \n", lucro);



	system("pause");
    return 0;
}

