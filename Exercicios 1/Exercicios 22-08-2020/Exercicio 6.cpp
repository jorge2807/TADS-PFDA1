/** 6 - Faça um algoritimo que receba o salário de um funcionário,  
****    calcule e mostre o novo salário, sabendo-se que este sofreu
****    um reajuste de 25%.
***/

#include <conio.h>  
#include <stdlib.h>
#include <stdio.h> 
#include <locale.h>

int main()

{
   printf("\n   Exercicio 6");   
   setlocale(LC_ALL, "Portuguese");
   
   // s = Sálario, ns = Novo salário com reajuste, r = Reajuste 
   float s, ns, r;  
   
   printf("\n\n   Digite um salário ............: ");
   scanf("%f", &s);
   
   r  = s * 0.25;
   ns = s + r;
   
   printf("\n   Novo salário com reajuste ....: %.2f", ns); 
   
   getch();
}
