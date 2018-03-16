// Exercicio_0033.cpp
/*
Exercício 0033
Escrever um programa que leia a idade e o codigo de estado civil das pessoas.
Fazer uma pergunta para saber se o usuario vai digitar dados de outrem.
Ao termino, apresentar as medias de idades de solteiros, casados, e divorciados.
O codigo para cada um dos estados civis esta designado por:
- SOLTEIROS = 1;
- CASADOS = 2;
- DIVORCIADOS = 3;
*/

#include "stdafx.h"
#include "stdlib.h"


int main()
{
	int idade, codigo, qtdSolteiro, qtdCasados, qtdDivorciados;
	float media, mediaSolt, mediaCasados, mediaDivorc;
	char resposta = 's';

	// Inicializando variaveis
	qtdSolteiro = qtdCasados = qtdDivorciados = 0;
	mediaSolt = mediaCasados = mediaDivorc = 0;

	while (resposta == 's')
	{
		system("cls");

		printf("Codigo Solteiro = 1 \n");
		printf("Codigo Casado = 2 \n");
		printf("Codigo Divorciado = 3 \n");

		// Entrada de dados
		printf("Digite o codigo de estado civil: \n");
		scanf_s("%d", &codigo);

		printf("Digite sua idade: \n");
		scanf_s("%d", &idade);

		switch (codigo)
		{
		case 1:
			mediaSolt += idade;
			qtdSolteiro++;
			break;
		case 2:
			mediaCasados += idade;
			qtdCasados++;
			break;
		case 3:
			mediaDivorc += idade;
			qtdDivorciados++;
			break;
		default:
			printf("Codigo digitado nao valido. Digite 1, 2, ou 3.\n");
			break;
		}


		printf("Deseja digitar os dados de outra pessoa? (s/n)");
		resposta = _gettche();
			printf("\n\n");
	}

	mediaSolt /= qtdSolteiro;
	mediaCasados /= qtdCasados;
	mediaDivorc /= qtdDivorciados;

	printf("A media de idade de solteiros:.............%.2f \n", mediaSolt);
	printf("A media de idade de casados:...............%.2f \n", mediaCasados);
	printf("A media de idade de divorciados:...........%.2f \n", mediaDivorc);
    return 0;
}

