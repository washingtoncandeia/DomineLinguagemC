// Exercicio_0035

#include "stdafx.h"
#include "stdlib.h"

int main()
{
	// Declarar variaveis
	int  codigo, countEntrada, totalSaida, totalEntrada;

	//Inicializar variaveis
	countEntrada = totalSaida = totalEntrada = 0;

	do {
		system("cls");
		printf("Menu de opcoes: \n");
		printf("0 - Encerra o programa \n");
		printf("1 - Incluir uma unidade no estoque \n");
		printf("2 - Excluir uma unidade no estoque \n");
		printf("3 - Mostrar o total disponivel no estoque \n");
		printf("4 - Mostrar o total de entradas no estoque \n");
		printf("5 - Mostrar o total de saidas no estoque \n");
		printf("Escolha uma opcao: ");
		scanf_s("%d", &codigo);

		switch (codigo)
		{
		case 0:
			printf("Encerrando o programa. \n");
			break;
		case 1:
			printf("Incluindo uma unidade no estoque. \n");
			countEntrada++; 
			totalEntrada++;		// Adicionando uma entrada
			break;
		case 2:
			if (countEntrada <= 0)
			{
				printf("Nao ha nenhuma unidade no estoque para excluir. \n");
			}
				
			else
			{
				countEntrada--;  // Excluindo uma unidade do estoque (2)
				totalSaida++;	// Total de saidas (5)
			}
			break;
		case 3:
			printf("Total disponivel no estoque:.................%d \n", countEntrada);
			break;
		case 4:
			printf("Total de entradas no estoque:................%d \n", totalEntrada);
			break;
		case 5:
			printf("Total de saidas no esoque:...................%d \n", totalSaida);
			break;
		default:
			printf("Codigo invalido.\n");
			break;
		}
		system("pause");

	} while (codigo != 0);
    return 0;
}

