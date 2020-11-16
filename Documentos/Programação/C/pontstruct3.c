#include <stdio.h>

int main(){

struct ponteiros{

int *pHora;
int *pMinuto;
int *pSegundo;

}agora;

int hora = 20;
int minuto = 32;
int segundo = 15;

agora.pHora = &hora;
agora.pMinuto = &minuto;
agora.pSegundo = &segundo;

printf("Hora : %i\n", *agora.pHora);
printf("Minuto : %i\n", *agora.pMinuto);
printf("Segundo : %i\n", *agora.pSegundo);

getchar();

}
