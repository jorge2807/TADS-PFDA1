/**   === Exercicio 3 ===
Escreva um programa que receba um número inteiro 
positivo n e retorne a soma dos n primeiros números inteiros.
Por exemplo, se for digitado 5, o programa 
deve mostrar o resultado da soma = 15, pois, 15=1+2+3+4+5.
*/

#include <conio.h>  
#include <stdlib.h>
#include <stdio.h> 
#include <locale.h>
main ()
{
 setlocale(LC_ALL, "Portuguese");
 
 int i, n, soma;
 
	printf("\n   Digite um numero inteiro positivo ...: ");
 	scanf("%i", &n);
 
 for(i=1, soma=0; i<=n; i++)
 {
 	soma = soma+i; 		// soma +=1
 	printf("%i ", i);
 }
 
 printf("\n Soma: %i\n", soma);
 
 system("pause");
}
