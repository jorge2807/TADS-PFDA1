/** 1 - Elaborar um algoritimo para calcular e representar o volume de uma lata de óleo,
***     ultilizando a formila: VOLUME = 3.14159 * (R*R) * ALTURA
***/

#include <conio.h>  
#include <stdlib.h>
#include <stdio.h> 
#include <locale.h>


int main()

{
   setlocale(LC_ALL, "Portuguese");
   
   printf("\n   Exercicio 1");
   
   float volume, raio, altura;
   
   printf("\n\n   Digite o raio ......: ");
   scanf("%f", &raio);
   
   printf("\n   Digite a altura ....: ");
   scanf("%f", &altura);
   
   volume = 3.14159 * raio*raio * altura;
   printf("\n   O volume da lata de óleo é ...: %.2f", volume);   
   
   
   getch();   
}
