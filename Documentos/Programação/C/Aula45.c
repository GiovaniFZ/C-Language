#include <stdio.h>

struct horario{

int horas;
int minutos;
int segundos;

};

int main(){
struct horario receber(struct horario agora[]);
struct horario agora[5];

printf("Digite 5 horarios no formato hh:mm:ss\n");

for(int i = 0; i < 5; ++i){
scanf("%i %i %i", &agora[i].horas, &agora[i].minutos, &agora[i].segundos);
}
receber(agora);
}

struct horario receber(struct horario agora[]){

printf("\nOs horarios digitados foram:\n ");

for(int i = 0; i < 5; ++i){

printf("horario %i = %i : %i : %i\n", i + 1, agora[i].horas, agora[i].minutos, agora[i].segundos);

}

}
