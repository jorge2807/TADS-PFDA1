/***  === Exercicio 2 ===
	Fa�a um algoritmo que imprima o 
	quadrado de todos os n�meros inteiros entre 15 e 200
***/

#include <conio.h>  
#include <stdlib.h>
#include <stdio.h> 
#include <locale.h>
main ()
{
 setlocale(LC_ALL, "Portuguese");
 
 int i;
 
 for(i=15; i<=200; i++)
 	printf("%i ", i*i);
 
 system("pause");
}
