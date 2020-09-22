#include <conio.h>  
#include <stdlib.h>
#include <stdio.h> 
#include <locale.h>


int main()

{
setlocale(LC_ALL, "Portuguese");

int carneirinhos;
char opc;

	for (carneirinhos = -1, opc = 'N'; opc == 'N'; carneirinhos++)
	{
		printf("\n   Dormiu? [S=sim][N=nao]");
		opc = getche();
	}
	
	printf("\n   Precisei contar %i carneirinhos", carneirinhos);
	getch();
	return(0);
}
 	

