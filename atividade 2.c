#include <stdio.h>
#include <stdlib.h>

int main(){
  
  char alunos[5][200];
  float notas [2][3];
  int idade[5];
  int i,j;
  float media[2];
  int somaNotas = 0;


  for (i = 0; i < 5; i++){
    printf("Digite o nome do aluno: ");
    gets(alunos[i]);

    printf("Digite a idade do Aluno: ");
    scanf("%d",&idade[i]);
    
    for(j = 0; j < 3; j++){
      printf("Digite a nota do aluno: ");
      scanf("%f",&notas[i][j]);

      somaNotas += notas[i][j];
    }
     media[i] = somaNotas / j;
     somaNotas = 0;
   fflush(stdin);
  }

  printf("\nExibindo os dados dos alunos...\n");
  

  for (i = 0; i < 5; i++){
    printf("\nNome do aluno: %s\n",alunos[i]);
    printf("\nIdade do aluno: %d\n",idade[i]);
    
    for (j = 0; j < 3; j++){ 
    printf("Nota: %.1f \n", notas[i][j]);
    }
    printf("\nMedia do aluno: %.1f",media[i]);
    if(media[i] >= 7){
      printf("\nAprovado\n");
    }else if(media[i] < 7 && media[i] >= 5){
      printf("\nRecuperação\n");
    }else{
      printf("\nREPROVADO!\n");
    
   }
  } 
 
  return 0;
}