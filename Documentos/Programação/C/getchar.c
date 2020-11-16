#include <stdio.h>

int main(){

char caractere;
char linha[30];
int i = 0;

printf("Digite uma string:\n");

do{

caractere = getchar();
linha[i] = caractere;
++i;

}while(caractere != '\n');

linha[i - 1] = '\0';
printf("A string digitada foi %s\n", linha);

}
