#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
  int i;
  char nome [5][200];
  int idade [6];
  float peso [6];
  float altura [6];
  int maioridade = 0,menoridade = 9999;
  float maiorpeso = 0,menorpeso = 9999,maioraltura = 0,menoraltura = 9999;
  
  for (i = 0;i < 5;i++){
    printf("Nome do Usuario: ");
    gets(nome[i]);
    
    printf("Idade do ° Usuario: ");
    scanf("%d",&idade[i]);

    printf("Peso do Usuario: ");
    scanf("%f",&peso[i]);
    fflush(stdin);
    printf("Altura do Usuario: ");
    scanf("%f",&altura[i]);
  
  maiorpeso = maiorpeso > peso[i] ? maiorpeso : peso[i];
  menorpeso = menorpeso < peso[i] ? menorpeso : peso[i];

  maioridade = maioridade > idade[i] ? maioridade : idade[i]; 
  menoridade = menoridade < idade[i] ? menoridade : idade[i]; 

  maioraltura = maioraltura > altura[i] ? maioraltura : altura[i];
  menoraltura = menoraltura > altura[i] ? menoraltura : altura[i];
    
    fflush(stdin);
}  
system("clear || clss");

    for ( i = 1; i <= 6; i++)
    {
        printf("%dº Nome: %s \n" ,i ,nome[i]);

        printf("%dº idade: %d\n" ,i ,idade[i]);

        printf("%dº informação do peso: %.2f \n" ,i ,peso[i]);
        
        printf("%dº informação da altura: %.2f\n\n" ,i ,altura[i]);

    }

    for ( i = 1; i <= 6; i++)
    {
         if (peso[i] == maiorpeso)
        {
            printf("\nNome da pessoa com mais peso: -%s- \n" ,nome[i]);
            printf("Maior Peso: %.1f kg \n" ,maiorpeso);
        } else if(peso[i] == menorpeso) {
            printf("\nNome da pessoa com menos peso: -%s- \n" ,nome[i]);
            printf("Menor Peso: %.1f kg \n" ,menorpeso);
        }

        if (altura[i] == maioraltura)
        {
            printf("\nNome da pessoa mais alta: -%s- \n " ,nome[i]);
            printf("Maior Altura: %.2f cm \n" ,maioraltura);
        }
        else if(altura[i] == menoraltura)
        {
            printf("\nNome da pessoa mais baixa: -%s- \n" ,nome[i]);
            printf("Menor Altura: %.2f cm \n" ,menoraltura); 
        }

        if (idade[i] == maioridade)
        {
            printf("\nNome da pessoa com mais idade: -%s- \n" ,nome[i]);
            printf("Maior Idade: %d \n" ,maioridade);
        }
        else if (idade[i] == menoridade)
        {
            printf("\nNome da pessoa com menos idade: -%s- \n " ,nome[i]);
            printf("Menor Idade: %d \n" ,menoridade);
        }
        
    }


  
  return 0;
}