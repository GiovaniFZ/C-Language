#include <stdio.h>

int main (){

float calcularAreaTrapesio(float basemenor, float basemaior, float altura);
float x, y, z;

printf("Digite o valor da base maior do trapesio.\n");

scanf("%f", &x);

printf("Digite o valor da base menor do trapesio\n");

scanf("%f", &y);

printf("Digite o valor da altura do trapesio\n");

scanf("%f", &z);

float area = calcularAreaTrapesio(x, y, z);

printf("A area do trapesio eh %f\n", area);

}

float calcularAreaTrapesio(float basemenor, float basemaior, float altura){


float area = ((basemenor + basemaior) * altura) /2;


return area;
}
