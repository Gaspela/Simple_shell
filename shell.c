/**
 * main - The controller shell
 * @argc: The arguments insert main
 * @argv: The array arguments insert to main 
 */
#include "shell.h"

/**/
int main(int __attribute__((unused)) argc, char *argv[])
{
    int init_shell = 1;
    int cont = 0;
    int read_getline;
    int stat;
    int exit_status = 0;
    size_t buf_size = 124;
    /*Variable cwd*/
    char cwd[124];
    char *type_command;
    char **arguments;
    char *token;
    char *cuttoken;
    pid_t procs_pid;

    type_command = malloc(buf_size);

    while (init_shell)
    {
        cont++;
        if (isatty(0) == 1)
        /*Update the pwd promt*/
            getcwd(cwd, sizeof(cwd));
        _printf("%s", cwd);
        _printf("/hsh$ ");
        /*read_getline captube and pass type_command how to standar in = 1*/
        read_getline = getline(&type_command, &buf_size, stdin);
        /**/
        if (!type_command)
            break;
        if (read_getline == -1)
            break;
        /**/
        /*token is a read one element of strtok*/
        token = strtok(type_command, DELIMS);
        /*!token*/
        if (!token)
            /*Consolo input, Standard output 1*/
            write(STDIN_FILENO, "", 1);
        /*Si no*/
        else
        {
            /*CD function construction*/
            if (_strcmp(token, "cd") == 0)
            { /*Cuttoken cut after token for DELIMS, CD ..*/
                cuttoken = strtok(0, DELIMS);
                if (!cuttoken)
                { /*Just write CD sent to HOME*/
                    chdir(_getenvironment("HOME"));
                    getcwd(cwd, sizeof(cwd));
                }
                else
                {
                    /*The other condition CD -*/
                    if (_strcmp(cuttoken, "-") == 0)
                    { /*CD - move the before content*/
                        getcwd(cwd, sizeof(cwd));
                        chdir(_getenvironment("OLDPWD"));
                    }
                    /*Si no*/
                    else
                    {
                        chdir(cuttoken);
                        getcwd(cwd, sizeof(cwd));
                    }
                }
            }
            /*The other condition print env use funtion _environment*/
            else if (_strcmp(token, "env") == 0)
            {
                _environment();
            }
            /*The other condition is EXIT the ./hsh*/
            else if (_strcmp(token, "exit") == 0)
            { /*Free memory type_command and exit_status*/
                free(type_command);
                exit(exit_status);
            }
            /*Si no*/
            else
            { /*procs_pid is a variable the process identifier the PID_T, fork ()
                create multiples process to help identify if it is the child or parent
                */
                procs_pid = fork();
                /*fork() create the child = 0 and parent !=0, */
                switch (procs_pid)
                {
                    /*Equal to -1 : Meaning wait for any child process.*/
                case -1:
                    perror("Error");
                    /*Exit 1 error*/
                    exit_status = 1;
                    exit(exit_status);
                    /*Case 0, process child*/
                case 0:
                    /*Create and add the items entered by the user in the array*/
                    arguments = create_array(type_command);
                    add_array(token, arguments);

                    execve(arguments[0], arguments, NULL);
                    _printf("%s: %i: %s:Command not found\n", argv[0], cont, arguments[0]);
                    /*Finally if execve() we release the (free) son and return to the father*/
                    free(arguments);
                    /*exit_status = 127 indicates a command not found error*/
                    exit_status = 127;
                    exit(exit_status);

                default:
                    /*Wait blocked the process child, and stat return the status process*/
                    wait(&stat);
                    /*WIFEXITED != 0*/
                    if (WIFEXITED(stat))
                        exit_status = WEXITSTATUS(stat);
                }
            }
        }
    }

    free(type_command);
    return (0);
    
}
