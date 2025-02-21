#include <stdio.h>

int main(){

int data[5];
int variavel;
printf("Digite alguns numeros:\n");
for(int i = 0; i < 5; ++i){

scanf("%i", &data[i]);
variavel = data[i];

}
printf("%i", variavel);
}
