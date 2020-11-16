#include <stdio.h>

int main(){

int x = 20;    // Declaração de x e de seu valor
int *ponteiro; // Declaração do ponteiro
ponteiro = &x; // ponteiro aponta no endereço de memória de x (Ponteiro esta armazenado em x)

int y = 45;   // Declaração de y e de seu valor
*ponteiro = y; // O ponteiro, que está apontando no endereço de memoria de x recebe o valor de y (* significa valor)

printf("x eh %i e y eh %i\n", x, y); // x e y sao iguais

}
