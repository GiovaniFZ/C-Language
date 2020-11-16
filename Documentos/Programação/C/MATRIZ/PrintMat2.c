#include <stdio.h>

int main (){

int i, j;
int ColA, LinA;
printf("Digite quantas linhas a Matriz A recebe\n");
scanf("%i", &LinA);
printf("Digite quantas colunas a Matriz A recebe\n");
scanf("%i", &ColA);

float Matriz[LinA][ColA];

printf("Digite os valores da Matriz\n");
for(i = 0; i < LinA; i++)
{
for(j = 0; j < ColA; j++)
{
printf("Matriz[%i][%i]: ", i + 1, j + 1);
scanf("%f", &Matriz[i][j]);
}


}
printf("A matriz digitada foi: \n\n");
for(i = 0; i < LinA; i++)
{
for(j = 0; j < ColA; j++)
{
printf("%6.f", Matriz[i][j]);
}
printf("\n\n");
}
return 0;
}
