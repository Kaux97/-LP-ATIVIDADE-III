#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL ,"portuguese");

    int num[5];
    int i;
    int pares = 0 ,impares = 0 ,negati, maior = 0 ,menor = 9999 ,contador = 0;
    float mediaPar = 0, mediaTotal = 0;
    int somaPar = 0 ,somaTotal = 0;

    for ( i = 0; i < 5; i++)
    {
        printf("Digite o %dº número: \n" ,i + 1);
        scanf("%d" ,&num[i]);


        if (num[i] % 2 == 0)
        {
            pares++;
            somaPar += num[i];
        } else {
            impares++;
        }

        if (num[i] < 0)
        {
            negati++;
        }

        maior = maior > num[i] ? maior : num[i];
        menor = menor < num[i] ? menor : num[i];

        contador++;
        somaTotal += num[i];
        
    }
    
    mediaPar = somaPar / pares;

    mediaTotal = somaTotal / contador;
    
    system("cls || clear");

    //exibindo


    for ( i = 0; i < 5; i++)
    {
        printf("\n%dº Número: %d\n\n" ,i+1 ,num[i]);
    }
    
    printf("Números Ímpares: %d \n" ,impares);
    printf("Números Negativos: %d \n" ,negati);
    printf("Maior Número: %d \n" ,maior);
    printf("Menor Número: %d \n" ,menor);
    printf("Média de Números Pares: %.1f \n" ,mediaPar);
    printf("Média dos Números: %.1f \n" ,mediaTotal);



    return 0;
}