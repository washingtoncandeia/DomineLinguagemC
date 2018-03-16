// Exercicio 008.cpp : Defines the entry point for the console application.
//
/*
	Exercicio 008 - Entrada de quilometragem
	Variaveis: quil_1, quil_2, quil_final; type int
*/

#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int quil_1, quil_2, quil_final;

	// Lendo
	printf("Digite a quilometragem inicial do carro: ");
	scanf_s("%d", &quil_1);  // Nao colocar \n

	printf("Digite a quilometragem na chegada: ");
	scanf_s("%d", &quil_2);

	// Processamento dos dados
	// Calcular a distancia percorrida
	quil_final = quil_2 - quil_1;

	// Saida de dados
	printf("Distancia percorrida: %d \n", quil_final);


	system("pause");
    return 0;
}

