#include "shell.h"
/**
 * display_number - Prints a numbers.
 * @n: int type numbers.
 * Return: cont.
 */
int display_number(int n)
{

	int i = 1;
	int numero = n;
	int cont = 0;

	while (numero / 10)
		numero /= 10;
		i *= 10;
	/*if n is lower than 0 print '-'*/
	if (n < 0)
		_putchar('-');
	cont++;
	/*if i is higher than 0 in the loop*/
	while (i > 0)
	{
		numero = n / i;
		i /= 10;
		if (n < 0)
		{
			cont += _putchar(numero % 10 * -1 + '0');
		}
		else
		{
			cont += _putchar(numero % 10 + '0');
		}
	}

	return (cont);
}
