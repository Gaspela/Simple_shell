#include "shell.h"
/**
 * _putchar - Prints a char
 * @c: type char
 * Return: The char printed
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _puts - prints a string.
 * @str: pointer char type
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}
