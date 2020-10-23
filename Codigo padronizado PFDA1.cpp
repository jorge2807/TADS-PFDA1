/*--------------------------------------------------------------
# Programa: Menu de opera��es
# Autor: Jorge Wilson Silva Jardim
# Descri��o: Esse c�digo solicita uma senha de 4 digitos 
e ao inserir a senha certa voc� � levado ao menu de opera��es de um
caixa eletr�nico.
# �ltima atualiza��o: 23/10/2020 �s 12:20
-------------------------------------------------------------*/

// Bibliotecas
#include <conio.h>  
#include <stdlib.h>
#include <stdio.h> 
#include <locale.h>

int main(){
	
 	setlocale(LC_ALL, "Portuguese");

 	char operacao, digitoUm, digitoDois, digitoTres, digitoQuatro;
	 
	printf ("\n   Digite uma senha de (4) quatro digitos: ");
	
	digitoUm = getch();
 		printf("*");
 		
 	digitoDois = getch();
 		printf("*");
 		
 	digitoTres = getch();
 		printf("*");
 		
 	digitoQuatro = getch();
 		printf("*");
	
	if(digitoUm == '1' && digitoDois == '3'&& digitoTres == '1' && digitoQuatro == '0'){
		
		printf("\n\n      Menu de opera��es: ");
		printf("\n\n      ===========================");
		printf("\n             a = Saldo: ");
	 	printf("\n            b = Dep�sito: ");
	 	printf("\n           c = Pagamentos: ");
	 	printf("\n          d = Transfer�ncias: ");
	 	printf("\n              e = Sair: ");
	 	printf("\n      ===========================");
	 	printf("\n\n      Escolha uma das op��es acima: ");
	 	scanf("%c", & operacao);

 	switch(operacao){
 		
	 	case 'a': printf("\n      Opera��o: Saldo");
	 	    break;
	 	    
	 	case 'b': printf("\n      Opera��o: Dep�sito");
	 	    break;
	 	    
	 	case 'c': printf("\n      Opera��o: Pagamentos");
	 	    break;
	 	    
	 	case 'd': printf("\n      Opera��o: Transfer�ncias");
	 	    break;
	 	    
	 	case 'e': printf("\n      Encerrando opera��es...");
	 	    break;
	 	    
	 	default: printf("\n      Opera��o inv�lida!");
 		}
	}
	
		else
			printf("\n\n      Senha inv�lida");
		
	getch();
}
