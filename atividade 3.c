#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");

	int i;
	char numero[20];
	char nome[200][200];
	int codigo;
	int contador = 0;

	do 
	{
	printf("Escolha um dos Códigos abaixo: \n");
	printf("-1- Cadastrar um Número \n");
	printf("-2- Exibir Numeros Telefônicos e Encerrar \n");
	scanf("%d", &codigo);
	
	switch (codigo)
	{
	case 1:

		fflush(stdin);
		
		printf("Digite seu Nome: \n");
		gets (nome[contador]);

		printf("Digite seu Número: \n");
		fgets(numero ,20, stdin);
		contador++;

		system("cls || clear");

		break;

	case 2:

		printf("Números Cadastrados: \n");
		for (i = 0; i < contador; i++)
		{
			
			printf("Nome do usuario: %s \n", nome[i]);
			printf ("Número de cadastrado: %s \n", numero);
			
			printf (" \n");
		}
		break;
		
	default:
		printf("Opção Inválida! \n");
		break;
	}
	
	} while (codigo != 2);
		
	return 0;
}