// Exercicio 0018.cpp : Defines the entry point for the console application.
//
/*
	Exercicio 0018 - Reajuste de Salario
	Taxa de reajuste: 15%, 10% e 5%
*/
#include "stdafx.h"


int main()
{
	// Declaracao de variaveis
	float salarioVelho, taxaReajuste, salarioNovo;

	printf("Digite o salario do funcionario: ");
	scanf_s("%f", &salarioVelho);

	// Desvio condicional encadeado
	if (salarioVelho <= 1000)
		taxaReajuste = 15;
	else if (salarioVelho <= 2000)   // Essa condicao pode ser <= 2000, 
		taxaReajuste = 10;			 // pois so sera alcançada se <= 1000 == FALSE.
	else
		taxaReajuste = 5;
	
	// Calculo Salario Novo
	salarioNovo = salarioVelho + (salarioVelho * (taxaReajuste / 100));

	// Escrevendo
	printf("Salario velho......: R$ %.2f \n", salarioVelho);
	printf("Taxa de reajuste...: %.2f%% \n", taxaReajuste);
	printf("Salario novo.......: R$ %.2f \n", salarioNovo);



    return 0;
}

