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
	printf("Escolha um dos C�digos abaixo: \n");
	printf("-1- Cadastrar um N�mero \n");
	printf("-2- Exibir Numeros Telef�nicos e Encerrar \n");
	scanf("%d", &codigo);
	
	switch (codigo)
	{
	case 1:

		fflush(stdin);
		
		printf("Digite seu Nome: \n");
		gets (nome[contador]);

		printf("Digite seu N�mero: \n");
		fgets(numero ,20, stdin);
		contador++;

		system("cls || clear");

		break;

	case 2:

		printf("N�meros Cadastrados: \n");
		for (i = 0; i < contador; i++)
		{
			
			printf("Nome do usuario: %s \n", nome[i]);
			printf ("N�mero de cadastrado: %s \n", numero);
			
			printf (" \n");
		}
		break;
		
	default:
		printf("Op��o Inv�lida! \n");
		break;
	}
	
	} while (codigo != 2);
		
	return 0;
}