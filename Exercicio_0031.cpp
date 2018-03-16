// Exercicio_0031.cpp
/*
Exercício 0031
Escreva um programa que leia numeros inteiros.
Escrever - no final - a media dos numeros.
a - Fazer a pergunta: "Deseja digitar outro numero: (s/n)?";
b - Resposta 's', o while continua;
c - Resposta 'n', sai do laço;
d - Ao sair do laço, calcular a media do numeros digitados;
e - Escrever na tela a media;
*/

#include "stdafx.h"


int main()
{
	// Declarar variaveis
	int num, soma = 0, qtdLido = 0;
	float media;
	char resposta = 's';

	// While loop
	while (resposta == 's')
	{
		printf("Digite um numero: \n");
		scanf_s("%d", &num);  // Le o numero

		soma += num;          // Python herda essa sintaxe (soma = soma + num)
		qtdLido++;            // Incrementa o valor (usado para media, denominador)    

		// Perguntar se quer continuar a digitar um numero
		printf("Deseja digitar outro numero: (s/n)?");   // Como ler a resposta?
		resposta = _gettche();						     // Armazena o caractere digitado, econdo-o na tela
		printf("\n\n");

	}
	
	media = ((float)soma / (float)qtdLido);  // Cast, para obter valor em float
	printf("A media dos numeros e:...........%.2f \n", media);
    return 0;
}

