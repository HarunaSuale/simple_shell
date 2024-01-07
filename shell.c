#include "shell.h"

/**
 * main - ....
 * Return: 0 on success
 */



int main()
{
	char command[120];

	while (true)
	{
		display_prompt();
		read_command(command, sizeof(command));
		exe_command(command);
	}

	return 0;
}
