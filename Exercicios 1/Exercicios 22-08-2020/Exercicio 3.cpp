/** 3 - Fa�a um programa que pe�a dois n�meros, base e expoente, 
****    calcule e mostre o primeiro n�mero elevado ao segundo n�mero.
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
