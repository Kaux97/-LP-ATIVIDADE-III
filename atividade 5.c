#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char produtos = [99][200];
    float valor = [99]{50 ,70 ,100};
    float totalGeral = 0;
    int qtd[99];
    int codigo;
    int cont = 0, i;
    do
    {
     
        printf(" \nMenu\n ");
        printf("Produtos: \n");
        printf("(1) Mouse = R$50,00\n", 1);
        printf("(2) Teclado = R$70,00\n", 2);
        printf("(3) Monitor = R$100,00\n", 3);
        printf("\n")
        printf(" (1) Adicionar uma venda\n");
        printf(" (2) Sair do Menu e exibir o total das vendas \n");

        scanf("%d", &codigo);

        system("cls || clear");

        switch (codigo)
        {
        case 1:
            fflush(stdin);

            printf("Informe o nome do produto: ");
            gets(produtos[cont]);


            printf("Digite a qtd: ");
            scanf("%d", &qtd[cont]);

            cont++;
            system("cls || clear");
            break;

        case 2:
        	
            printf("Total das Vendas: \n \n");
            printf("\n--------------------------------- \n");
            for (i = 0; i < cont; i++)
            {
                printf("Nome do Produto: %-20s \n",produtos[i]); 
				printf("Preço: R$%-10.2f \n", valor[i]); 
				printf("Quantidade de Produtos: %-5d \n" ,qtd[i]);
				printf("Total de vendas do produto: R$%.2f\n" , qtd[i] * valor[i]);
				
				
                totalGeral += qtd[i] * valor[i];
            }

            printf("\nValor Total de vendas: R$%.2f\n", totalGeral);
            break;

        default:
            printf("Opcao Invalida! \n");
            break;
        }

    } while (codigo != 2);

    return 0;
}