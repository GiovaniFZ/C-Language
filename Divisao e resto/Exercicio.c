#include <stdio.h>

int main () {
  int Num1, Num2;
  printf("Digite um numero inteiro\n");
  scanf("%i", &Num1);
  printf("Digite um outro numero inteiro\n");
  scanf("%i", &Num2);
  if(Num1 % Num2 == 0) {
    printf("O primeiro numero digitado eh divisivel pelo segundo\n");
  }
  else {
    printf("O primeiro numero digitado NAO eh divisivel pelo segundo.\n");
  }

  return 0;
  getchar();
}
