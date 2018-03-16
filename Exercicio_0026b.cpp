// Exercicio_0026b.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	/*
	um for loop que contenha variaveis iniciadas em zero
	Uma variavel sera a soma (guardar a soma durante o loop)
	*/
	int valor, soma = 0;  // A soma inicializa em zero, pois a partir dela teremos o valor final

	for (int i = 0; i < 10; i++)
	{
		printf("Digite um valor: \n");
		scanf_s("%d \n", &valor);
		soma = soma + valor;
	}

	printf("O valor da soma total foi:........%d \n", soma);
    return 0;
}

