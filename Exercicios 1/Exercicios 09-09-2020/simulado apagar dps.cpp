#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()

{
	int a=0, b=1, c, d, e=a+b;
	for(c=3; c<=11; c++)
	{
		e = e + (a+b);
		d = a;
		a = b;
		b = b + d;
	}
	 printf ("%i %i %i %i %i", a, b, c, d, e);
	getch();
	return 0;
}

