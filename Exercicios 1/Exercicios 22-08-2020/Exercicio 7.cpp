/** 7 - Faça um programa que receba o ano de nascimento de uma pessoa  
****    e o ano atual, calcule e mostre:
****    a) a idade dessa pessoa;
****    b) a idade dessa pessoa em meses;
****    c) a idade dessa pessoa em dias; 
****    d a idade dessa pessoa em semanas;
***/

#include <conio.h>  
#include <stdlib.h>
#include <stdio.h> 
#include <locale.h>

int main()

{
   printf("\n   Exercicio 7");   
   setlocale(LC_ALL, "Portuguese");
   
   /**              VARIÁVEIS
   ***  an = Ano de nascimento, aa = ano atual, i = idade
   *** im = idade em meses, id = idade em dias
   **  is = idade em semanas **/
   int an, aa, i, im, id, is;
   
   printf("\n\n   Ano de nascimento ......: ");
   scanf("%i", &an);
   
   printf("\n   Ano atual ..............: ");
   scanf("%i", &aa);
   
   i  = aa - an;
      
   printf("\n   Idade ..................: %i", i);
   
   im = i * 12;  
    
   printf("\n\n   Idade (meses) ..........: %i meses de vida", im);
   
   id = i * 365;
   
   printf("\n\n   Idade (dias) ...........: %i dias de vida", id);
   
   is = i * 52.1426;
   
   printf("\n\n   Idade (semanas) ........: %i semanas de vida", is);   
   
   getch();
}
