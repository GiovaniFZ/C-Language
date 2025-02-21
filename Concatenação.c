#include <stdio.h>

int main(){

void ConcatenarStrings(char c[], char d[], char New[]);

char a[8] = {'L', 'i', 'n', 'e', 'a', 'g', 'e', ' '};
char b[4] = {'t', 'r', 'e', 'e'};
char NovaPalavra[12];
 

ConcatenarStrings(a, b, NovaPalavra);

for(int i = 0; i < 12; i++){
printf("%c", NovaPalavra[i]);

}
printf("\n");
}
void ConcatenarStrings(char c[], char d[], char New[]){

for(int i = 0; i < 8; i++){

New[i] = c[i];

}

for(int j = 0; j < 4; j++){

New[8 + j] = d[j];


}

}
