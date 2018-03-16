// Exercicio_0034.cpp
/*
	Escreva um programa que leia o codigo numerico da opcao de um menu
	e execute os comandos do menu.
	0 - Encerrar o programa;
	1 - Incluir uma panela no estoque;
	2 - Incluir uma chaleira no estoque;
	3 - Incluir uma vassoura no estoque;
	4 - Relatorio de inclusoes;
*/

#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int codigo, contPan, contCha, contVas;

	// Inicializar todas as variaveis em zero:
	contPan = contCha = contVas = 0;

	do {
		system("cls");
		printf("Menu de opcoes: \n");
		printf("0 - Encerra o programa \n");
		printf("1 - Incluir uma panela no estoque \n");
		printf("2 - Incluir uma chaleira no estoque \n");
		printf("3 - INcluir uma vassoura no estoque \n");
		printf("4 - Relatorio de inclusoes \n");
		printf("Escolha uma opcao: ");
		scanf_s("%d", &codigo);
		
		// Tratamento das opcoes do menu
		// Desvio condicional de multiplos casos
		// Switch case
		switch (codigo)
		{
		case 0:
			printf("Encerrando o programa. \n");
			break;
		case 1:
			printf("Incluindo uma  panela no estoque. \n");
			contPan++;
			break;
		case 2:
			printf("Incluindo uma chaleira no estoque. \n");
			contCha++;
			break;
		case 3:
			printf("Incluindo uma vassoura no estoque. \n");
			contVas++;
			break;
		case 4:
			printf("Relatorio de insclusoes: \n");
			printf("Quantidade de panelas no estoque:..........%d \n", contPan);
			printf("Quantidade de chaleiras no estoque:........%d \n", contCha);
			printf("Quantidade de vassouras no estoque:........%d \n", contVas);
			break;
		default:
			printf("Codigo invalido.\n");
			break;
		}
		system("pause");

	} while (codigo != 0);   // Para encerrar o programa deve-se ter zero


    return 0;
}

