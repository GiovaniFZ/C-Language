#include <stdio.h>

int main(){

void FuncaoAl(int y, int vet2[]);
int x = 5;
int vet[2] = {10};

FuncaoAl(x, vet);

printf("Variavel x na funcao main eh %i\n", x);
printf("O vetor na funcao main eh %i\n", vet[1]);

}

void FuncaoAl(int y, int vet2[]){

y *= 10;
vet2[1] = 15;

printf("Variavel x na funcao custom eh %i\n", y);
printf("O vetor na funcao custom eh %i\n", vet2[1]);

}
