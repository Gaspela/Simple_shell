#include "shell.h"
/**
 * _printf - print the variables
 * @string: constant pointer chat type.
 * Return: const.
 */
int _printf(const char *string, ...)
{
	char *data;
	int i;
	int strlen;
	int cont = 0;
	va_list val;

	if (string == NULL)
	return (-1);
	/*Init valist*/
	va_start(val, string);
	for (i = 0; string[i]; i++)
	{	/*String = 0*/	
		if (string[i] == '%')
		{
			i++;
			switch (string[i])
			{
				case 'c':
				cont += _putchar(va_arg(val, int));
					break;
					case 's':
					data = va_arg(val, char *);
					if (data == NULL)
					{
						data = "(NULL)";
						_puts(data);
						cont += _strlen(data);
						break;
					}
					strlen = _strlen(data);
					if (data[strlen] != 0)
						return (-1);
						_puts(data);
						cont += _strlen(data);
						break;
					case '%':
						cont += _putchar(string[i]);
						break;
					case 'i':
						cont += display_number(va_arg(val, int));
						break;
					case 'd':
						cont += display_number(va_arg(val, int));
						break;
					case ' ':
						return (-1);
					case '\0':
						return (-1);
					default:
						_putchar('%');
						_putchar(string[i]);
							cont += 2;
							break;
					}
			}
			else
		{
		cont += _putchar(string[i]);
		}
	}
	va_end(val);
	return (cont);
}
