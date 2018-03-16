// Exercicio_0021_revisao.cpp
// Usar switch case

#include "stdafx.h"


int main()
{
	int codigo;

	printf("Digite um codigo numerico: \n");
	scanf_s("%d", &codigo);

	switch (codigo)
	{
	case 1:
		printf("Panela \n");
		break;
	case 2:
		printf("Chaleira \n");
		break;
	case 3:
		printf("Prato \n");
		break;
	default:
		printf("Codigo digitado invalido \n");
		break;
	}

    return 0;
}

