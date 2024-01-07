#include "shell.h"


/**
 * exe_command - a function to execute the prompt
 * @command: .....
 * Return: nothing
 */


void exe_command(char *command)
{
	pid_t child_pid == fork();

	if(cild_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		execlp(command, command, (char *)NULL);
		perror("execlp");
		exit(EXIT_FAILURE)
	}
	else 
		wait(NULL);
}
