// Exercicio 0022.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int num;

	printf("Digite um numero entre 0 e 10: ");
	scanf_s("%d", &num);

	// switch
	switch (num)
	{
	case 0:
		printf("Zero \n");
		break;
	case 1:
		printf("Um \n");
		break;
	case 2:
		printf("Dois \n");
		break;
	case 3:
		printf("Tres \n");
		break;
	case 4:
		printf("Quatro \n");
		break;
	case 5:
		printf("Cinco \n");
		break;
	case 6:
		printf("Seis \n");
		break;
	case 7:
		printf("Sete \n");
		break;
	case 8:
		printf("Oito \n");
		break;
	case 9:
		printf("Nove \n");
		break;
	case 10:
		printf("Dez \n");
		break;
	default:
		printf("Numero esta fora da faixa de 0 a 10 \n");
		break;
	}


    return 0;
}

