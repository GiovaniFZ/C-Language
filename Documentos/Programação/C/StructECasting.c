#include <stdio.h>

int main(){

struct horario{ //definição da estrutura do tipo horário

   int horas;   //Variaveis contidas no tipo horario
   int minutos;
   float liseg;

};

struct horario agora; //Declaração de agora e depois que receberão a estr. do tipo horário
struct horario depois;

agora.horas = 3;    //Declaração das variáveis de estruturas com o nome agora, que receberam horario
agora.minutos = 40;
agora.liseg = 5.75;

depois.horas = agora.minutos - 30; //Declaração das variaveis de estruturas com o nome depois
depois.minutos = agora.horas + 25;
depois.liseg = (float)depois.minutos / agora.horas;  //uso do Casting ao declarar float

printf("%i %i %.2f\n", agora.horas, agora.minutos, agora.liseg);
printf("%i %i %.2f\n", depois.horas, depois.minutos, depois.liseg);

}
