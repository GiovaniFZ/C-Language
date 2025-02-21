#include <stdio.h>

int main(){

int NumeroCaracteres(char String2[]); 
char String[20];

printf("Digite uma palavra: ");
scanf("%s", String);

int num1 = NumeroCaracteres(String);

printf("A palavra digitada possui %i letras e %i caracteres\n", num1, num1 + 1 );

return 0;
}

int NumeroCaracteres(char String2[]){

int NumString = 0;
while(String2[NumString] != '\0'){

NumString++;

}

return NumString;

}
