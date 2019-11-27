#include "shell.h"
/**
 * _strlen - Return the length of a string.
 * @str: Check value string
 * Return: lnt
 */
int _strlen(char *str)
{
	int i;
	int leng;

	leng = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		leng++;
	}
	return (leng);
}
