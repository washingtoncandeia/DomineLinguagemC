// Exercicio 0020.cpp : Defines the entry point for the console application.
//
/*
Exercicio 0020 - Salario Familia
Ler e escrever
*/

#include "stdafx.h"


int main()
{
	float  salHora, salBruto, salFamil, salLiq;
	int qtdHoras, qtdFilho;

	printf("Digite o valor de salario hora de um professor: ");
	scanf_s("%f", &salHora);
	printf("Digite a quantidade de horas trabalhadas: ");
	scanf_s("%d", &qtdHoras);
	printf("Digite a quantidade de filhos menores de 14 anos: ");
	scanf_s("%d", &qtdFilho);

	// Calculo do salario bruto
	salBruto = salHora * qtdHoras;

	// Desvio condicional encadeado
	if (salBruto <= 700)
		salFamil = 8.50 * qtdFilho;
	else if (salBruto <= 1000)
		salFamil = 6.50 * qtdFilho;
	else
		salFamil = 2.50 * qtdFilho;

	// Calculo do salario liquido
	salLiq = salBruto + salFamil;

	// Escrever
	printf("O valor do salario bruto.........: R$ %.2f \n", salBruto);
	printf("O valor do salario familia.......: R$ %.2f \n", salFamil);
	printf("O valor do salario liquido.......: R$ %.2f \n", salLiq);



    return 0;
}

