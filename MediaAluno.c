#include <stdio.h>

int main(){

  float notaUm = 0;
  float notaDois = 0;
  float notaTres = 0;
  float notaQuatro = 0;
  float mediaTotal = 0;

  // ler os num
  print("Coloque a 1a nota: ")
  scanf("%f", notaUm);
  print("Coloque a 2a nota: ")
  scanf("%f", notaDois);
  print("Coloque a 3a nota: ")
  scanf("%f", notaTres);
  print("Coloque a 4a nota: ")
  scanf("%f", notaQuatro);

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