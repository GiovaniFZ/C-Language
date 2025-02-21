#include <stdio.h>

int main(){

float vet[5];
float total;
float media;

printf("Digite os valores do vetor:\n");
for(int a = 0; a < 5; ++a){
printf("vetor[%i]: ", a);
scanf("%f", &vet[a]);
}

for(int a = 0; a < 5; ++a){
total += vet[a];
}
media = total/5;

printf("A soma dos valores digitados eh: %f\n", total);
printf("A media dos valores digitados eh: %f\n", media);

return 0;

}
