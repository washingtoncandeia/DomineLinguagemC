// Exercicio 007.cpp : Defines the entry point for the console application.

/*
	Exercicio 007
	Calcular volumede um cilindro - azeite
*/

#include "stdafx.h"
#include "stdlib.h"


int main()
{
	float volume, raio, altura;  // Declaração das variaveis

	// Inicializacao das variaveis

	raio = 8.3;
	altura = 15.0;
	volume = (3.14159) *(raio * raio) * (altura);

	// Apresentando resultado

	printf("O volume do cilindro de azeite é %.2f \n", volume);

	system("pause");
    return 0;
}

