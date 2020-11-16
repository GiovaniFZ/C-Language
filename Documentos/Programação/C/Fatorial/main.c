#include <stdio.h>
#include <stdlib.h>
int main()
{
    int fat, n;
    printf("Insira um valor e eu calculo o fatorial dele\n");
    scanf ("%d", &n);

    for(fat = 1; n > 1; n = n - 1){
        fat = fat*n;
    printf("\nO fatorial do numero eh: %d\n" , fat);
}
    return 0;
    }
