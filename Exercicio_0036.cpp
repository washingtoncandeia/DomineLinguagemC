// Exercicio_0036.cpp

#include "stdafx.h"
#include "stdlib.h"


int main()
{
	int codigo, pessoas, totEnt, totSai, disponivel = 40;

	// Inicializando as variaveis:
	pessoas = totEnt = totSai = 0;

	do {
		system("cls");
		printf("Controle de acesso ao restaurante: \n");
		printf("0 - Encerrar o programa \n");
		printf("1 - Entrar uma pessoa no restaurante \n");
		printf("2 - Sair uma pessoa do restaurante \n");
		printf("3 - Mostrar quantos lugares estao disponiveis \n");
		printf("4 - Mostrar o total de pessoas que entrararm \n");
		printf("5 - Mostrar o total de pessoas que sairam \n");

		printf("Digite o codigo: \n");
		scanf_s("%d", &codigo);

		switch (codigo)
		{
		case 0:
			printf("Encerrando o programa \n");
			break;
		case 1:
			if (disponivel > 0)
			{
				totEnt++;
				disponivel--;
			}
			else
			{
				printf("Nao ha lugares disponiveis. Ha 40 pessoas no restaurante. \n");
			}
			break;
		case 2:
			if (disponivel == 40)
			{
				printf("Restaurante esta vazio. \n");
			}
			else
			{
				printf("Saindo um pessoa do restaurante \n");
				disponivel++;
				totSai++;
			}
			break;
		case 3:
			printf("Quantidade de lugares disponiveis:..............%d \n", disponivel);
			break;
		case 4:
			printf("Total de pessoas que entraram no restaurante:......%d \n", totEnt);
			break;
		case 5:
			printf("Total de pessoas que sairam do restaurante:........%d \n", totSai);
			break;
		default:
			printf("Codigo digitado nao valido. (Veja a lista de codigos)");
			break;
		}
		system("pause");

	} while (codigo != 0);

    return 0;
}

