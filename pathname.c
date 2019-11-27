#include "shell.h"
/**
 * pathname - replaces usr's cmd with the pathname of cmd
 *
 * @args: get the arguments from the string
 * Return: args
*/
char *pathname(char *args)
{

	int cont = 0;

	comando replace_cmd[] = {
		{"ls", "/bin/ls"},
		{"echo", "/bin/echo"},
		{"cat", "/bin/cat"},
		{"chmod", "/bin/chmod"},
		{"mkdir", "/bin/mkdir"},
		{"mv", "/bin/mv"},
		{"pwd", "/bin/pwd"},
		{"rm", "/bin/rm"},
		{"rmdir", "/bin/rmdir"},
		{NULL, NULL}};

	while (replace_cmd[cont].type_command)
	{
		if (_strcmp(args, replace_cmd[cont].type_command) == 0)
			args = replace_cmd[cont].return_funtion;
			cont++;
	}

	return (args);
}
