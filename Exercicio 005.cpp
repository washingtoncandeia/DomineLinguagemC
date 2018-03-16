// Exercicio 005.cpp : Defines the entry point for the console application.
/*
	Exercício 005 
	Declaração de variáveis
	Odometro_1 = 200000
	Odometro_2 = 207349
	DistanciaFinal = Odometro2 - Odometro_1  

*/

#include "stdafx.h"
#include "stdlib.h"


int main()
{
	int odometro_1 = 200000;
	int odometro_2 = 207349;
	int distanciaFinal = odometro_2 - odometro_1;

	// Imprimindo na tela
	printf("Quilometragem inicial era de %d \n", odometro_1);
	printf("Quilometragem apos viagem foi de %d \n", odometro_2);
	printf("A distancia percorrida foi de %d \n", distanciaFinal);

	system("pause");
    return 0;
}

