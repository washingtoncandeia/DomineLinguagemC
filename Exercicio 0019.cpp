// Exercicio 0019.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"


int main()
{
	float salBruto, taxaINSS, desconto, salLiquido;

	printf("Digite o valor do salario: ");
	scanf_s("%f", &salBruto);

	// Desvio condicional encadeado
	if (salBruto <= 1317.07)
		taxaINSS = 8;
	else if (salBruto <= 2195.12)
		taxaINSS = 9;
	else
		taxaINSS = 11;

	// Calculando
	desconto = (taxaINSS / 100) * salBruto;
	salLiquido = salBruto - desconto;

	// Escrever
	printf("O valor do salario bruto  e.......: R$ %.2f \n", salBruto);
	printf("O valor da taxa INSS e............: %.2f %%\n", taxaINSS);
	printf("O valor do desconto e.............: R$ %.2f \n", desconto);
	printf("O valor do salario liquido e......: R$ %.2f \n", salLiquido);

    return 0;
}

