#include <stdio.h>
int main()
{

int ArmazenarIdade(int id);
int id = ArmazenarIdade(id);

if (id < 18){
printf("Bebidas alcoolicas nao sao permitidas\n");
}
else {
printf("Bebidas alcoolicas permitidas.\n");
}
return 0;
}


int ArmazenarIdade(int id)
{
printf("Digite sua idade\n");
scanf("%i", &id);
return id;
}
