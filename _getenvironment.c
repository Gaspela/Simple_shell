#include "shell.h"
/**
 * _environment - prints the environments
 */
void _environment(void)
{
	int cont = 0;

	while (environ[cont])
	{
		_printf("%s\n", environ[cont]);
		cont++;
	}
}
/**
 * _getenvironment - capture variable in type_command
 * @env: match variable in type_command
 * Return: 0
*/
char *_getenvironment(const char *env)
{
	int cont = 0;
	char *type_command;
	char *data;

	while (environ[cont])
	{
		type_command = strtok(environ[cont], "=");
		data = strtok(0, " ");
		if (_strcmp(type_command, env) == 0)
			return (data);
		cont++;
	}

	return (0);
}
