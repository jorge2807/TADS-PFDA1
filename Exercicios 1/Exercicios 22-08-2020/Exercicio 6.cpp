/** 6 - Fa�a um algoritimo que receba o sal�rio de um funcion�rio,  
****    calcule e mostre o novo sal�rio, sabendo-se que este sofreu
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
   
   // s = S�lario, ns = Novo sal�rio com reajuste, r = Reajuste 
   float s, ns, r;  
   
   printf("\n\n   Digite um sal�rio ............: ");
   scanf("%f", &s);
   
   r  = s * 0.25;
   ns = s + r;
   
   printf("\n   Novo sal�rio com reajuste ....: %.2f", ns); 
   
   getch();
}
