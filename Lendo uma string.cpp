// Lendo uma string.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"

int main()
{
	char nome[80];       // Strings em C - 80 numero maximo
	printf("Digite um nome: ");
	gets_s(nome);

	printf("Nome lido: %s \n", nome);


	system("pause");
    return 0;
}

