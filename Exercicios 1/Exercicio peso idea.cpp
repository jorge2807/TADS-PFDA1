/* Prte 2
Elabore o programa em Linguagem C que funcione da seguinte maneira:

Dados a altura e o sexo de uma pessoa, determine seu peso ideal de 
acordo com as fórmulas a seguir:
 - para homens o peso ideal é 72.7*altura - 58
 - para mulheres o peso ideal é 62.1*altura - 44.7
*/

// Bibliotecas
#include <conio.h>  
#include <stdlib.h>
#include <stdio.h> 
#include <locale.h>


int main()

{
 	setlocale(LC_ALL, "Portuguese");
 	
 	char sexo;
 	float altura;
 	
 	printf("\n   Informe o sexo (m) para masculino e (f) para feminino ...: ");
 	scanf("%c", & sexo);
 	
 	printf("\n   Informe a altura ...: ");
 	scanf("%f", & altura);
 	
 	
 	if (sexo == 'm') 	
 	{
		 printf("\n   Seu peso ideal é ...: %.2fKg", 72.7*altura - 58);
	}
	 
	else if (sexo == 'f') 
	{
		 printf("\n   Seu peso ideal é ...: %.2fKg", 62.1*altura - 44.7);	
 	}
     
 	else
  	{
 		printf("\n   Letra inválida!\n   informe o sexo com as letras (m) masculino e (f) feminino");	
	}
 	
 	getch();
 }
