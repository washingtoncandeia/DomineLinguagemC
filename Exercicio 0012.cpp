// Exercicio 0012.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"


int main()
{
	int anoNasc, idade, dias, horas, min, seg;

	printf("Digite o ano em q ue voce nasceu: ");
	scanf_s("%d", &anoNasc);

	// Processamento de dados
	idade = 2016 - anoNasc;
	dias = idade * 365;
	horas = dias * 24;
	min = horas * 60;
	seg = min * 60;

	// Apresentacao
	printf("A idade da pessoa e %d. \n", idade);
	printf("Passaram-se %d dias. \n", dias);
	printf("Horas: %d.\n", horas);
	printf("Minutos: %d.\n", min);
	printf("Segundos: %d.\n", seg);



	system("pause");
    return 0;
}

