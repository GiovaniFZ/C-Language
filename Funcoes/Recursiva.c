#include <stdio.h>

int main(void){
int numero, fat;
int CalcularFatorial(int x);

printf("Digite um numero inteiro para o programa calcular o fatorial\n");
scanf("%i", &numero);
fat = CalcularFatorial(numero);
printf("O resultado do fatorial do numero digitado eh %i\n", fat);
return 0;

}
int CalcularFatorial(int x){
int fat;

if(x == 0) {

fat = 1;

} else {
fat = x * CalcularFatorial(x - 1);

}
return fat;
}

