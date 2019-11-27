#include "shell.h"
/**
 * create_array - Create an array that contains type_command
 * @type_command: Command entered by the promt.
 * Return: argv.
 */
char **create_array(char *type_command)
{
	char **argv;
	int i = 0;
	int cont = 0;

	while (type_command[i])
	{
		if (type_command[i] != ' ' || type_command[i] != '\n')
			cont++;
		i++;
	}
	argv = malloc(sizeof(char *) * cont);
	if (!argv)
	{
		perror("Error");
		exit(1);
	}

	return (argv);
}
