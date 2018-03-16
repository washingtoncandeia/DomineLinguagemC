// Exercicio 0011.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"


int main()
{
	float nota1, nota2, nota3, media;

	printf("Digite a primeira nota: ");
	scanf_s("%f", &nota1);
	printf("Digite a segunda nota: ");
	scanf_s("%f", &nota2);
	printf("Digite a terceira nota: ");
	scanf_s("%f", &nota3);

	// Processamento
	media = (nota1 + nota2 + nota3) / 3;

	// Apresentacao
	printf("A media do aluno foi %.2f \n ", media);



	system("pause");
    return 0;
}

