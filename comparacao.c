#include <stdio.h>

int main(){

int a, b;

printf("Digite um valor:\n");
scanf("%i", &a);

printf("Digite um outro valor\n");
scanf("%i", &b);

a > b ? printf("O primeiro valor eh maior que o segundo!\n") : 
printf("O segundo valor eh maior que o primeiro\n");

return 0;

}
