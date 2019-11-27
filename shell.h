#ifndef SHELL_H
#define SHELL_H
#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
/*#include <sys/types.h>*/
#include <stdarg.h>

#define DELIMS " \t\r\n\a"

int _strcmp(const char *s1, const char *s2);
int _strlen(char *str);
void _environment(void);
char *_getenvironment(const char *env);
int _printf(const char *format, ...);
void _puts(char *str);
int _putchar(char c);
int display_number(int n);
char *pathname(char *argv);
char **create_array(char *in_command);
void add_array(char *token, char **command_array);
/**
 * struct shellstruct - structure that finds.
 * @type_command: command in user
 * @return_funtion: return function.
 */
typedef struct shellstruct
{
	char *type_command;
	char *return_funtion;

} comando;
#endif /* Nuestra shell */
