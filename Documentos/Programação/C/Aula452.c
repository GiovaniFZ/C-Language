#include <stdio.h>

struct horario{

int horas;
int minutos;
int segundos;

};

int main(){

void ReceberHorarios(struct horario agora[5]);
void PrintarHorarios(struct horario agora[5]);
struct horario agora[5];

ReceberHorarios(agora);
PrintarHorarios(agora);

return 0;
}

void ReceberHorarios(struct horario agora[5]){

printf("Digite 5 horarios:\n");

for(int i = 0; i < 5; ++i){

printf("Horario %i = ", i + 1);
scanf("%i:%i:%i", &agora[i].horas, &agora[i].minutos, &agora[i].segundos);

}
}

void PrintarHorarios(struct horario agora[5]){

for(int i = 0; i < 5; ++i){
printf("%i Horario digitado = %i : %i: %i\n", i + 1, agora[i].horas, agora[i].minutos, agora[i].segundos);
}
}

