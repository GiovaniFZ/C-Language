#include "stdio.h"
#include "math.h"
#include "stdlib.h"

int main (){
int ColA, ColB, LinA, LinB;
int i, j, k;
printf("Digite quantas linhas a matriz A Recebe\n");
scanf("%i", &LinA);
printf("Digite quantas colunas a matriz A Recebe\n");
scanf("%i", &ColA);
printf("Digite quantas linhas a matriz B Recebe\n");
scanf("%i", &LinB);
printf("Digite quantas colunas a matriz B recebe\n");
scanf("%i", &ColB);
float A[LinA][ColA];
float B[LinB][ColB];
float C[LinA][ColB];
float temp = 0;
if(ColA == LinB){
printf("Digite os valores INTEIROS da Matriz A\n");
for(i = 0; i < LinA; i++){
for(j = 0; j < ColA; j++){
printf("A[%i][%i] :\n", i + 1, j + 1);
scanf("%f", &A[i][j]);
}
}
printf("Digite os valores INTEIROS da Matriz B\n");
for(i = 0; i < LinB; i++){
for(j = 0; j < ColB; j++){
printf("B[%i][%i] :\n", i + 1, j + 1);
scanf("%f", &B[i][j]);
}
}
for(i = 0; i < LinA; i++){
for(j = 0; j < ColB; j++){
C[i][j] = 0;
for(k = 0; k < LinB; k++){
temp += A[i][k] * B[k][j];
}
C[i][j] = temp;
temp = 0;
}
}
printf("A multiplicacao entre as matrizes eh igual a matriz C[%i][%i]:\n", LinA, ColB);
for(i = 0; i < LinA; i++){
for(j = 0; j < ColB; j++){
printf("%6.f", C[i][j]);
}
printf("\n\n");
}
}
else{
printf("A Multiplicação nao pode ser realizada.\n");
}
return 0;
}
