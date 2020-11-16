#include <stdio.h>

int main(){

int PrintMat(int mat2[3][3]);
int matriz[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
PrintMat(matriz);

}

int PrintMat(int mat2[3][3]){

for(int i = 0; i < 3; ++i){
for(int j = 0; j < 3; ++j){
printf("%i", mat2[i][j]);
}
printf("\n");
}
}