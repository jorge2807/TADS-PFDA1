/*--------------------------------------------------------------
# Programa: Menu de operações
# Autor: Jorge Wilson Silva Jardim
# Descrição: Esse código solicita uma senha de 4 digitos 
e ao inserir a senha certa você é levado ao menu de operações de um
caixa eletrônico.
# Última atualização: 23/10/2020 às 12:20
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
		
		printf("\n\n      Menu de operações: ");
		printf("\n\n      ===========================");
		printf("\n             a = Saldo: ");
	 	printf("\n            b = Depósito: ");
	 	printf("\n           c = Pagamentos: ");
	 	printf("\n          d = Transferências: ");
	 	printf("\n              e = Sair: ");
	 	printf("\n      ===========================");
	 	printf("\n\n      Escolha uma das opções acima: ");
	 	scanf("%c", & operacao);

 	switch(operacao){
 		
	 	case 'a': printf("\n      Operação: Saldo");
	 	    break;
	 	    
	 	case 'b': printf("\n      Operação: Depósito");
	 	    break;
	 	    
	 	case 'c': printf("\n      Operação: Pagamentos");
	 	    break;
	 	    
	 	case 'd': printf("\n      Operação: Transferências");
	 	    break;
	 	    
	 	case 'e': printf("\n      Encerrando operações...");
	 	    break;
	 	    
	 	default: printf("\n      Operação inválida!");
 		}
	}
	
		else
			printf("\n\n      Senha inválida");
		
	getch();
}
