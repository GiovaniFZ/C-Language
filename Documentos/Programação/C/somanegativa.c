#include <stdio.h>

int main(){

float x, y, soma;
float SomaDigitos(float x, float y);
  
  printf("Digite dois valores: \n");
  scanf("%f", &x);
  scanf("%f", &y);
  soma = SomaDigitos(x, y);
  printf("A soma dos valores absolutos eh: %.2f\n", soma);
}

float SomaDigitos(float x, float y){

float converter(float k);

if(x < 0){
   x = converter(x);
}
if(y < 0){
     y = converter(y);
}
float soma = x + y;
return soma;
}

float converter(float k){

 return k * -1;

}
