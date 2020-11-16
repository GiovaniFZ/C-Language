#include <stdio.h>

int main(){

float matriz[4][4];
float vetor[4];
float media;

printf("Digite as notas do aluno 1:\n");
for(int i = 0; i < 4; i++){
for (int j = 0; j < 4; j++ ){
     
   scanf("%f", &matriz[i][j]);
   media += matriz[i][j] / 4;
}
vetor[i] = media;
media = 0;
printf("Digite as notas do aluno %i: \n", i + 2);
}

for(int i = 0; i < 4; i++){
 
printf("A media do aluno %i eh: %.2f \n", i + 1, vetor[i]);

}

printf("\n");
return 0;
}
