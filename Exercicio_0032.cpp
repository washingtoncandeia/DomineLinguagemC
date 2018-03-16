// Exercicio_0032.cpp
/*
Exercício 0032
Ler 3 notas escolares.
a - Calcular a media;
b - Apresente a media;
c - Informar se o aluno foi aprovado ou reprovado (media = 6);
d - O programa deve perguntar ao final:
"Deseja digitar as notas de outro aluno? (s/n)";
*/

#include "stdafx.h"
#include "stdlib.h"


int main()
{
	// Declarar variaveis
	float nota1, nota2, nota3, div = 3, media;
	char resposta = 's';

	// Quantidade indeterminada, laço while
	while (resposta == 's')
	{
		system("cls");  // Clear screen: limpa a tela
		printf("Digite a nota 1: \n");
		scanf_s("%f", &nota1);
		printf("Digite a nota 2: \n");
		scanf_s("%f", &nota2);
		printf("Digite a nota 3: \n");
		scanf_s("%f", &nota3);

		media = (nota1 + nota2 + nota3) / div;		
		printf("A media do aluno:.........%.2f \n", media);

		if (media >= 6)
			printf("O aluno foi aprovado. \n");
		else
			printf("O aluno foi reprovado. \n");

		printf("Deseja digitar as notas de outro aluno? (s/n)");
		resposta = _gettche();
		printf("\n\n");
		
	}
    return 0;
}

