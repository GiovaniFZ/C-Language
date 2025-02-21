#include <stdio.h>

int main (){

float x, y, z, t, media;
printf("Digite as notas do aluno. Aperte enter para digitar a nota seguinte.\n");
scanf("%f", &x);
scanf("%f", &y);
scanf("%f", &z);
scanf("%f", &t);

media = (x + y + z + t) / 4;
if (media >= 6){
printf("O aluno foi aprovado com uma media de %.2f pontos.\n", media);
}else{
if(media >= 4){
printf("O aluno esta de exame. A media dele foi de %.2f pontos.\n", media);
}else{
printf("O aluno reprovou. A media dele foi de %.2f pontos.\n", media); 
}
}
return 0;
}