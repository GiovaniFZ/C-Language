#include <stdio.h>

int main(){

int resultado;
int numero;
int i = 0;
int CalcularFatorial(int num1);

printf("Digite um numero inteiro: ");
scanf("%i", &numero);

resultado = CalcularFatorial(numero);
printf("O Fatorial do numero digitado eh %i\n", resultado);

}

int CalcularFatorial(int num1){
int res = 1;
int i = 0;

i = num1;

if(i == 0){

res = 1;

}else{

if(i > 1){
while(i > 1){

res *= i;
--i;
}
return res;
}else{

printf("O valor digitado nao eh inteiro\n");
return 0;
}
}
}
