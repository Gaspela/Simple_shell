#include "shell.h"
/**
 * add_array - sets the usr's cmds into our newly made argv array
 * @token: strtok's type command.
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
