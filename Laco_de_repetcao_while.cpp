// Laco_de_repetcao_while.cpp : Defines the entry point for the console application.
// Repeticao while

#include "stdafx.h"


int main()
{
	int num, resultado, counter;  
	counter = 0;		// Inicializacao da variavel contadora

	while (counter < 5)  // Teste de repeticao
	{
		printf("Digite um numero:");
		scanf_s("%d", &num);
		resultado = num * 3;
		printf("O resultado foi: %d \n", resultado);

		counter++;	// Reinicializacao da variavel
	}

	
    return 0;
}

