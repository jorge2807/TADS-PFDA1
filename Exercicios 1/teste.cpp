/* Parte 1
Elabore o programa em Linguagem C que funcione da seguinte maneira:

1º) Solicite ao usuário uma senha de 4 caracteres (e que, obviamente
não permita que a senha seja vista na tela, mas sim asterísticos);
2º) Após a captura da senha, validá-la (a senha correta é 1310);
3º) Se a senha digitada estiver correta, mostrar ao usuário a seguinte tela:
                     ==========================
                              a = Saldo:
                             b = Depósito:
                            c = Pagamentos:
                           d = Transferências: 
                               e = Sair: 
                   	===========================    
4º) Após o usuário escolher um caracter, o programa deverá:
		caso seja digitado o caracter a, mostrar a mensagem: "Operação: saldo".    
		caso seja digitado o caracter b, mostrar a mensagem: "Operação: depósito".
		caso seja digitado o caracter c, mostrar a mensagem: "Operação: pagamentos".
		caso seja digitado o caracter d, mostrar a mensagem: "Operação: transferências".
		caso seja digitado o caracter e, mostrar a mensagem: "Operação: Encerrando operações" 
	e encerrar o programa.
		caso seja digitado qualquer outro caracter, mostrar a mensagem: "Opção inválida!".
*/

// Bibliotecas
#include <conio.h>  
#include <stdlib.h>
#include <stdio.h> 
#include <locale.h>


int main()

{
 	setlocale(LC_ALL, "Portuguese");
 // d1 = Digito 1 e assim sucessivamente
 	char operacao, d1, d2, d3, d4;
	 
	printf("\n   Digite uma senha de (4) quatro digitos: ");
	
	d1 = getch();
 	printf("*");
 	d2 = getch();
 	printf("*");
 	d3 = getch();
 	printf("*");
 	d4 = getch();
 	printf("*");
	
	if(d1 == '1' && d2 == '3'&& d3 == '1' && d4 == '0')
{
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

 	switch(operacao)
 {
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
	{
		printf("\n\n      Senha inválida");
	}
 
	getch();
}

