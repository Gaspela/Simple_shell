#include "shell.h"
/**
 * add_array - set the command type user made command_array
 * @token: strtok's string delims.
 * @command_array: the array we are inputting the values into
 * Return: none
 */
void add_array(char *token, char **command_array)
{

	int cont = 0;

	while (token)
	{
	if (cont == 0)
		token = pathname(token);
		command_array[cont] = token;
		token = strtok(NULL, DELIMS);
		cont++;
	}
	command_array[cont] = NULL;
}
