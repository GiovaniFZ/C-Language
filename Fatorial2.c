#include <stdio.h>

int main() {
  int numero = 0;
  int fatorial = 1;
  printf("Digite um numero: ");
  scanf("%i", &numero);

  for(int i = numero; i > 1; i = i - 1){
    fatorial *= i;
  }
  printf("O fatorial eh %i\n", fatorial);
}
