#include <stdio.h>
struct horario{
int hora;
int minutos;
int segundos;
};

int main(void){

void ReceberHorario(struct horario lista[5]);
void Printarhorario(struct horario lista[5]);
struct horario ListHor[5];

ReceberHorario(ListHor);
Printarhorario(ListHor);
}

void ReceberHorario(struct horario lista[5]){
int i;
for (i = 0; i < 5; i++){

printf("Digite o %i horario (hh:mm:ss): ", i + 1);
scanf("%i : %i : %i", &lista[i]. hora, 
                      &lista[i]. minutos,
                      &lista[i]. segundos);  
}
}
void Printarhorario(struct horario lista[5]){
int i;
for (i = 0; i < 5; i++){

printf(" O %i horario digitado foi %i : %i : %i\n", i + 1, lista[i]. hora, 
                                                    lista[i]. minutos,
                                                    lista[i]. segundos);  
}
}
