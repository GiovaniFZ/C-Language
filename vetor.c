#include <stdio.h>

int main(){

   int notas[5];
   for(int a = 0; a < 5; ++a){
   printf("Digite o valor do %i vetor:\n", a);
   scanf("%i", &notas[a]);
}
  printf("\n");
  for(int b = 0; b < 5; b++){
  printf("Vetor[%i] = %i\n", b, notas[b]);

}
printf("\n");
return 0;

}
