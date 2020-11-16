#include <stdio.h>

int main(){

void VerificarLetra(char letra2[]);
char letra[20];

printf("Escreva uma palavra: ");
scanf("%s", &letra);
VerificarLetra(letra);

}

void VerificarLetra(char letra2[]){
int i = 0;

while(letra2[i] != '\0'){
if(letra2[i] >= 'a' && letra2[i] <= 'z' ){

printf("%i caractere: Letra minuscula\n", i + 1);
++i;
}else{

printf("%i caractere: Nao eh letra minuscula\n\a", i + 1);
++i;

}
}

getchar();

}

