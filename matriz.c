#include <stdio.h>

int main(){

int m, n;
printf("Digite os valores de m e de n: \n");
scanf("%i", &m);
scanf("%i", &n);
int matriz[m][n];

printf("Digite os valores da matriz: \n");

for(int i = 0; i < m; i++){
   for(int j = 0; j < n; j++){
   printf("Matriz[%i][%i]: ", i, j);
   scanf("%i", &matriz[i][j]);
}
}
printf("\n");
printf("A matriz digitada foi: \n");
for(int i = 0; i < m; i++){
   for(int j = 0; j < n; j++){
   printf("%i ", matriz[i][j]);
}
printf("\n");
}
printf("\n");
return 0;

}
