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
        printf("Digite o %d� n�mero: \n" ,i + 1);
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
        printf("\n%d� N�mero: %d\n\n" ,i+1 ,num[i]);
    }
    
    printf("N�meros �mpares: %d \n" ,impares);
    printf("N�meros Negativos: %d \n" ,negati);
    printf("Maior N�mero: %d \n" ,maior);
    printf("Menor N�mero: %d \n" ,menor);
    printf("M�dia de N�meros Pares: %.1f \n" ,mediaPar);
    printf("M�dia dos N�meros: %.1f \n" ,mediaTotal);



    return 0;
}