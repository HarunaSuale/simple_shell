#include "shell.h"

/**
 * read_command - a fuction to read user inputs
 * @command: function parameter
 * Return: nothing after execution
 */


void read_command(char *command, size_t len)
{
	if(fgets(command, len, stdin) == NULL)
	{
		if(feof(stdin))
		{
			print_me('\n');
			exit(EXIT_FAILURE);
		}
		else
		{
			print_me("sorry the file reading failed");
			exit(EXIT_FAILURE);
		}

	}

	command[strcspn(command, "\n")] = '\0';
}
