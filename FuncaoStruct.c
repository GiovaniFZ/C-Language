#include <stdio.h>

struct horario{  // estrutura global do tipo horario contendo 3 variaveis do tipo int

int num1;
float num2;
char num3;

};

int main(){
struct horario teste(struct horario x);  /* declara que existe uma função struct do tipo 
                                            horario de nome teste que retorne uma struct do 
                                            tipo horario de nome qualquer. */

struct horario agora; // declara uma struct do tipo horario chamada agora
struct horario proxima; // declara uma struct do tipo horario chamada proxima

agora.num1 =  20; // atribui os valores das 3 variaveis da struct horario agora
agora.num2 = 4.75;
agora.num3 = 'a';

proxima = teste(agora);  /*nesse momento, para saber o valor de proxima, o
                           compilador executa o que está na função teste sabendo que ela deve retornar a struct 
                           horario agora*/

printf("%i, %.2f, %c\n", proxima.num1, proxima.num2, proxima.num3);

}
struct horario teste(struct horario x){

printf("%i, %.2f, %c\n", x.num1, x.num2, x.num3);

x.num1 = 100;
x.num2 = 5.5;
x.num3 = 'd';

return x;

}
