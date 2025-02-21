#include <stdio.h>

// Based on https://github.com/lucmsilva651/etec-pc1/blob/main/MEDIAALUNO.ALG

int main(){

  float notaUm = 0;
  float notaDois = 0;
  float notaTres = 0;
  float notaQuatro = 0;
  float mediaTotal = 0;

  // ler os num
  printf("Coloque a 1a nota: ");
  scanf("%f", &notaUm);
  printf("Coloque a 2a nota: ");
  scanf("%f", &notaDois);
  printf("Coloque a 3a nota: ");
  scanf("%f", &notaTres);
  printf("Coloque a 4a nota: ");
  scanf("%f", &notaQuatro);

  // checagem desnecessaria, somente para demonstracaooo hehe
  if(notaUm > 0 && notaDois > 0 && notaTres > 0 && notaQuatro > 0){
    // checagem real da media
    mediaTotal = (notaUm + notaDois + notaTres + notaQuatro)/4;
    if(mediaTotal >= 7){
        printf("Aluno aprovado, media: %f", mediaTotal);
    } else {
        printf("Aluno reprovado, media: %f", mediaTotal);
    }
  } else {
    printf("Deve ser somente zero, aluno reprovado de qqlr jeito");
  }
  return 0;
}