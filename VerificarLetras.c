#include <stdio.h>

int main(){

void VerificarCaractere(char verify);
char caractere[20];
int i = 0;

printf("Digite uma palavra: ");
scanf("%s", caractere);

while(caractere[i] != '\0'){

VerificarCaractere(caractere[i]);
++i;

}
}

void VerificarCaractere(char verify){

if(verify >= 'a' && verify <= 'z' || 
   verify >= 'A' && verify <= 'z'){

   printf("eh uma letra\n", verify);

}else{

printf("nao eh uma letra\n", verify);

}

}
