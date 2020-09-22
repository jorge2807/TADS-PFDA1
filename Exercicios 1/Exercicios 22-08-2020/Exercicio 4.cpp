/** 4 - Leia um grau Celsius e calcule o seu equivalente em Fahrenheit, 
****    ultilizando a fórmula: F = (°C*1.8)+32.
***/

#include <conio.h>  
#include <stdlib.h>
#include <stdio.h> 
#include <locale.h>

int main()

{
   printf("\n   Exercicio 4");
   
   setlocale(LC_ALL, "Portuguese");
   
   float c, f;
   
   printf("\n\n   Temperatura em graus Celsius ....: ");
   scanf("%f", &c);
   
   f = (c*1.8) + 32;
   
   printf("\n   Temperatura em graus Fahrenheit ...: %.2f", f);
   
   getch();
}
