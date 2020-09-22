/**   === Exercicio 4 ===
Uma rainha requisitou os serviços de um monge e disse-lhe que pagaria qualquer preço.
O monge, necessitando de alimentos, indagou à rainha sobre o pagamento, se poderia ser feito com grãos de trigo dispostos em um
tabuleiro de xadrez, de tal forma que o primeiro quadro deveria conter apenas um grão e os quadros subseqüentes, o dobro do quadro
anterior.
A rainha achou o trabalho barato e pediu que o serviço fosse executado, sem se dar conta de que seria impossível efetuar o pagamento.
Todavia, utilizando-se um quarto do tabuleiro é possível fazer o pagamento do monge.
Elabore o programa C que calcula e mostra na tela o valor do pagamento do monge. Usar loop for.
*/

#include <conio.h>  
#include <stdlib.h>
#include <stdio.h> 
#include <locale.h>
#include <math.h>

main ()
{
 setlocale(LC_ALL, "Portuguese");
 
int i,graos = 1;

   for(i=1; i<16 ; i++)
   {
      graos = 2 * graos;
   }

	printf("\n   O pagamento do monge será ...: %.i Grãos\n\n", graos);

system("pause");
}
 
 
