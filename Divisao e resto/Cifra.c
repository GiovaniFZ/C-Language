# include <stdio.h>

int main ()
{

int cifra, numero;
  
   printf("Digite um numero inteiro positivo\n");
   scanf("%i", &numero);
   while(numero !=0) {
    
  cifra = numero % 10;
  printf("%i", cifra);  
  numero /=10;
} 
 printf("\nEssa e a cifra do numero digitado.");  
 return 0;
}

