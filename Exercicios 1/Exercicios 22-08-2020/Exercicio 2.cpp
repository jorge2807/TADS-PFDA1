/* 2 - Leia um número e retorne o dobro e o seu quadrado.
**/

#include <conio.h>  
#include <stdlib.h>
#include <stdio.h> 
#include <locale.h>


int main()

{
   setlocale(LC_ALL, "Portuguese");
   
   printf("\n   Exercicio 2");
   
   int numero, dobro, quadrado;

   printf("\n\n   Digite um numero ....: ");
   scanf("%i", &numero);
   
   dobro = numero + numero;
   printf("\n   Dobro  ..............: %i", dobro);   
   
   quadrado = (numero * numero);
   printf("\n\n   Quadrado ............: %i", quadrado);
   
   getch();
}
