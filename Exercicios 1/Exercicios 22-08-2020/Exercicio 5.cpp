/** 5 - Calcule o sal�rio l�quido de um funcion�rio, sabendo que sobre o sal�rio bruto, 
****    incide-se um desconto de 8,5% para a previd�ncia e sobre o restante, tem-se um
****    um desconto de 27,5% para i IR. leia o sal�rio bruto e mostre o sal�rio k�quido,
****    o IR e a previd�ncia.
***/

#include <conio.h>  
#include <stdlib.h>
#include <stdio.h> 
#include <locale.h>

int main()

{
   printf("\n   Exercicio 5");   
   setlocale(LC_ALL, "Portuguese");
   
   /*** sb = Sal�rio bruto, sl = Sal�rio l�quido
   **** ir = Imposto de Renda
   ***/
   float sb, sl, ir, pr, restante;
	
   printf("\n\n   Digite o sal�rio bruto ....: ");
   scanf("%f", &sb);
   
   pr = sb * 0.085;
   printf("\n\n   Previd�ncia ...............: %.2f", pr);
   
   restante = sb - pr;
   
   ir = restante * 0.275;
   printf("\n\n   Imposto de renda ..........: %.2f", ir);
   
   sl = sb - ir - pr;
   printf("\n\n   Sal�rio l�quido ...........: %.2f", sl);
   
   getch();
}
