#include <stdio.h>

int main(){

for(int i = 1; i < 30; ++i){

if(i % 10 == 0){
printf("O numero da variavel aqui eh 10\n");
break;

}else{

printf("%i nao eh 10\n", i);

}
}
getchar();
}
