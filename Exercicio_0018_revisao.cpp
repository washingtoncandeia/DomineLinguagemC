// Exercicio_0018_revisao.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"

int main()
{
	// Declaracao de variaveis
	float salarioVelho, taxaReajuste, salarioNovo;

	// Entrada de dados
	printf("Digite o salario do funcionario: ");
	scanf_s("%f", &salarioVelho);

	// Desvio Condicional Composto
	if (salarioVelho <= 1000)
		taxaReajuste = 15;
	else if (salarioVelho <= 2000)
		taxaReajuste = 10;
	else
		taxaReajuste = 5;

	// Calculando salario novo
	salarioNovo = salarioVelho + (salarioVelho * (taxaReajuste / 100));

	// Escrevendo 
	printf("Salario velho..........: R$ %.2f \n", salarioVelho);
	printf("Taxa de reajuste.......: R$ %.2f \n", taxaReajuste);
	printf("Salario novo...........: R$ %.2f \n", salarioNovo);



	system("pause");
    return 0;
}

