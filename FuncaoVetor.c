#include <stdio.h>

int main(){
void InverterVetor(int vet[], int n);
int vet[10] = {6, 4, 1, 9, 8, 0, 5, 7, 3, 2};
InverterVetor(vet, 10);

for(int i = 0; i < 10; i++){
printf("%i", vet[i]);
}
printf("\n");
}
void InverterVetor(int vet[], int n){

 int temp = 0;
 for(int i = 0; i < n; i++){
 for(int j = i + 1; j < n; j++){
 
if(vet[i] > vet[j]){
      
      temp = vet[i];
      vet[i] = vet[j];
      vet[j] = temp;
}
}
}
}
