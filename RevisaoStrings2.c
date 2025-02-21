#include <stdio.h>
#include <stdbool.h>


struct dicionario{

char word[20];
char definition[30];

};

int main(){

char palavra[20] = {'\0'};
int Resultado;
int ProcurarStrings(struct dicionario language[], char PalavraDigitada[], int numPalavras);

struct dicionario language[4] = 
{{"Buffer", "Regiao de memoria"},
 {"VNDK", "Vendor Development Kit"},
 {"Android", "Sistema Operacional"},
 {"USB", "Universal Serial Bus"}}; 


printf("Digite uma palavra: ");
scanf("%s", &palavra);

Resultado = ProcurarStrings(language, palavra, 4);

if (Resultado != -1){

printf("%s\n", language[Resultado].definition);

}else{

printf("Palavra nao encontrada.\n");
}


}

int ProcurarStrings(struct dicionario language[], char PalavraDigitada[], int numPalavras){
bool Comparar(char PalavraDigitada[], char palavra2[]);

int i = 0;

while(i < numPalavras){

if(Comparar(PalavraDigitada, language[i].word) == true){

return i;

}else{

++i;

}

}

return -1;

}

bool Comparar(char palavra1[], char palavra2[]){

int i = 0;

while(palavra1[i] == palavra2[i] 
      && palavra1[i] != '\0'
      && palavra2[i] != '\0' ){

      ++i;


}

if(palavra1[i] == '\0' && palavra2[i] == '\0'){

return true;

}else{

return false;

}
}
