#include "stdio.h"
#include "math.h"
#include "stdbool.h"
#include "stdlib.h"
#define P 3.14
/*Programa Easy Triangle versão 2.00. Criado por Giovani F.
*/

int main(void)
{
    int k;
    float b, h, a;
    float lum, ldois, area, senGr, x;
    float hl1, hl2, hl3, p, areaH, raiz;

while(true){
    printf("Selecione uma opcao para calcular a area do triangulo:\n");
    printf("1 - Base e a altura disponiveis\n");
    printf("2 - Lados disponiveis e o angulo formado\n");
    printf("3- Os 3 lados disponiveis\n");
    printf("4- Sair\n");
    printf("Sua opcao: ");
    scanf("%d", &k);

    switch (k) {
case 1:
    printf("Digite o valor da base\n");
    scanf("%f", &b);
    printf("Digite o valor da altura\n");
    scanf("%f", &h);
    a = ((b * h) /2);
    printf("O valor da area equivale a %f\n", a);
    puts("\n");
    break;
case 2:
    printf("Digite o valor do primeiro lado\n");
    scanf("%f", &lum);
    printf("Digite o valor do segundo lado\n");
    scanf("%f", &ldois);
    printf("Digite o valor do angulo formado\n");
    scanf("%f", &x);
    senGr = sin(x * P/180);
    area = ((lum * ldois) * senGr / 2);
    printf("A Area do triangulo equivale a %f\n", area);
    puts("\n");
    break;
case 3:
    printf("Digite o valor do primeiro lado\n");
    scanf("%f", &hl1);
    printf("Digite o valor do segundo lado\n");
    scanf("%f", &hl2);
    printf("Digite o valor do terceiro lado\n");
    scanf("%f", &hl3);
    p = ((hl1 + hl2 + hl3) /2);
    areaH = p * (p - hl1) * (p - hl2) * (p - hl3);
    raiz = sqrt(areaH);
    printf("A area do triangulo equivale a %f\n", raiz);
    puts("\n");
    break;
case 4:
    exit(0);
default:
    printf("Opcao invalida\n");
    puts("\n");
    }
}
getchar();
return 0;
}
