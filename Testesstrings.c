#include <stdio.h>

int main(){

char palavra1[] = {'T', 'e', 's', 't', 'e', '\0'}; //Caractere nulo
char palavra2[5] = {'T', 'e', 's', 't', 'e'}; //Sem caractere nulo
char palavra3[] = "Teste"; //Carac. nulo é colocado automaticamente

printf("%s\n", palavra1);
printf("%s\n", palavra2);
printf("%s\n", palavra3);

}
