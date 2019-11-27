#include "shell.h"
/**
 * _strcmp - Funtion compare two string.
 * @s1: String one.
 * @s2: String two.
 * Return: zero is equal.
*/
int _strcmp(const char *s1,const char *s2)
{
	int i;
/* Print string */
	for (i = 0; s1[i] != '\0'; i++)
	{
/* Compare string */
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}

	return (0);
}
