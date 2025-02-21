#include <stdio.h>

int main(){

struct estru{

int num1;
float num2;

};

struct estru agora[4];

for(int i = 0; i < 4; ++i){

agora[i].num1 = i + 5;
agora[i].num2 = i + 7.37; 

}

for(int j = 0; j < 4; j++){

printf("%i %.2f\n", agora[j].num1, agora[j].num2);

}

}
