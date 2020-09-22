/** 3 - Faça um programa que peça dois números, base e expoente, 
****    calcule e mostre o primeiro número elevado ao segundo número.
***/

#include <conio.h>  
#include <stdlib.h>
#include <stdio.h> 
#include <locale.h>
#include <math.h>


int main()

{
   setlocale(LC_ALL, "Portuguese");
   
   printf("\n   Exercicio 3");
   
   int numero1, numero2, resultado;
   
   printf("\n\n   Digite a base .....: ");
   scanf("%i", &numero1);
   
   printf("\n   Digite o expoente ..: ");
   scanf("%i", &numero2);
   
   resultado = pow(numero1, numero2);
   
   printf("\n   Resultado ..........: %i", resultado);
   
   getch();
}
