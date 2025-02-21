#include <stdio.h>

int main (){

struct horario
{
int horas;
int minutos;
int segundos;
};
struct horario agora;
agora.horas = 15;
agora.minutos = 32;
agora.segundos = 19;

printf("%i", agora.horas);
printf("%i", agora.minutos);
printf("%i", agora.segundos);

return 0;
}
