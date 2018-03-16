// CalcularSoma.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int valorA, valorB, soma;  // Declaracao das variaveis

	printf("Digite um numero: ");   // Entrada de dados
	scanf_s("%d", &valorA);
	printf("Digite outro numero: ");
	scanf_s("%d", &valorB);

	soma = valorA + valorB;   // Processamento de dados	

	printf("A soma foi: %d \n", soma);     // Saida de dados
	printf("%d + %d = %d \n", valorA, valorB, soma);

	system("pause");
    return 0;
}

