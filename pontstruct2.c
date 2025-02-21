#include <stdio.h>

int main(){

struct horario{

int hora;
int minuto;
int segundo;

}antes, *agora, depois;

agora = &antes;

agora -> hora = 14;
agora -> minuto = 50;
agora -> segundo = 30;

int auxiliar = 15;

depois.hora = agora -> hora + auxiliar;
depois.minuto = agora -> minuto - auxiliar;
depois.segundo =  antes.hora * 2;

printf("%i , %i , %i\n", depois.hora, depois.minuto, depois.segundo);

}
