#include <stdio.h>

int main(){

struct camera{

int megapixel;
float abertura;
char objeto;

}celular, *armazenador;

armazenador = &celular;

armazenador -> megapixel = 5;
armazenador -> abertura = 2.2;
armazenador -> objeto = 'a';

printf("%i e %.2f e %c\n", celular.megapixel , celular.abertura , celular.objeto);

}
