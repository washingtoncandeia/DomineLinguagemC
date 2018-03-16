// Exercicio_0029.cpp : loop while

/*
	Exercicio 0029 
	Escreva um programa que leia numeros inteiros:
	a-Ate que seja digitado um numero negativo (ate que indica quantidade indeterminada
    de repeticoes, logo: laco while);
	b-Escrever: a quantidade de numeros que foram digitados;
*/

#include "stdafx.h"


int main()
{
	// Enquanto nao for digitado um numero negativo
	// continuar lendo 

	// Declarar variaveis
	int num = 0, qtdDigitada = 0;


	while (num >= 0)  // Enquanto numero for maior que 0, continue

	{
		printf("Digite um numero: ");
		scanf_s("%d", &num);
		qtdDigitada++;
	}
	
	// b-Escrever: a quantidade de numeros digitados
	printf("Quantidade de numeros digitados: %d \n", qtdDigitada);


    return 0;
}

