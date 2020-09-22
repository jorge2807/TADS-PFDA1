/** 5 - Calcule o salário líquido de um funcionário, sabendo que sobre o salário bruto, 
****    incide-se um desconto de 8,5% para a previdência e sobre o restante, tem-se um
****    um desconto de 27,5% para i IR. leia o salário bruto e mostre o salário kíquido,
****    o IR e a previdência.
***/

#include <conio.h>  
#include <stdlib.h>
#include <stdio.h> 
#include <locale.h>

int main()

{
   printf("\n   Exercicio 5");   
   setlocale(LC_ALL, "Portuguese");
   
   /*** sb = Salário bruto, sl = Salário líquido
   **** ir = Imposto de Renda
   ***/
   float sb, sl, ir, pr, restante;
	
   printf("\n\n   Digite o salário bruto ....: ");
   scanf("%f", &sb);
   
   pr = sb * 0.085;
   printf("\n\n   Previdência ...............: %.2f", pr);
   
   restante = sb - pr;
   
   ir = restante * 0.275;
   printf("\n\n   Imposto de renda ..........: %.2f", ir);
   
   sl = sb - ir - pr;
   printf("\n\n   Salário líquido ...........: %.2f", sl);
   
   getch();
}
