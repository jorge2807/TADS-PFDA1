/* Parte 1
Elabore o programa em Linguagem C que funcione da seguinte maneira:

1�) Solicite ao usu�rio uma senha de 4 caracteres (e que, obviamente
n�o permita que a senha seja vista na tela, mas sim aster�sticos);
2�) Ap�s a captura da senha, valid�-la (a senha correta � 1310);
3�) Se a senha digitada estiver correta, mostrar ao usu�rio a seguinte tela:
                     ==========================
                              a = Saldo:
                             b = Dep�sito:
                            c = Pagamentos:
                           d = Transfer�ncias: 
                               e = Sair: 
                   	===========================    
4�) Ap�s o usu�rio escolher um caracter, o programa dever�:
		caso seja digitado o caracter a, mostrar a mensagem: "Opera��o: saldo".    
		caso seja digitado o caracter b, mostrar a mensagem: "Opera��o: dep�sito".
		caso seja digitado o caracter c, mostrar a mensagem: "Opera��o: pagamentos".
		caso seja digitado o caracter d, mostrar a mensagem: "Opera��o: transfer�ncias".
		caso seja digitado o caracter e, mostrar a mensagem: "Opera��o: Encerrando opera��es" 
	e encerrar o programa.
		caso seja digitado qualquer outro caracter, mostrar a mensagem: "Op��o inv�lida!".
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

 	switch(operacao)
 {
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
	{
		printf("\n\n      Senha inv�lida");
	}
 
	getch();
}

