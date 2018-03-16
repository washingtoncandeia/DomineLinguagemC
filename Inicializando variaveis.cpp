// Inicializando variaveis.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	// Declaração de variáveis
	int numero = 46;
	float valor = 8.37;
	char letra = 'X';
	int var1, var2, var3;

	var1 = var2 = var3 = 0;
	
	printf("Variavel numero...: %d \n", numero);
	printf("Variavel valor...: %f \n", valor);
	printf("Variavel valor...: %10.2f \n", valor);
	printf("Variavel valor...: %.2f \n", valor);
	printf("Variavel letra...: %c \n", letra);
	printf("%d %d %d \n", var1, var2, var3);
	
    return 0;
}

