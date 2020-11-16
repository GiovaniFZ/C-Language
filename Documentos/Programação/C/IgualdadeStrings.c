#include <stdio.h>

int main(){

_Bool VerificarIgualdade(char a[], char b[]);

char palavra[20];
char palavra2[20];

printf("Digite duas palavras:\n");
scanf("%s%s", &palavra, &palavra2);

if(VerificarIgualdade(palavra, palavra2)){

printf("As strings sao iguais.\n");

}else{

printf("Nao gostei das palavras digitadas.\n");

}


}

_Bool VerificarIgualdade(char a[], char b[]){

int i = 0;

while(a[i] == b[i] && a[i] != '\0' && b[i] != '\0'){

++i;

}
if(a[i] == '\0' && b[i] == '\0'){

return 1;

}else{

return 0;
}

}
