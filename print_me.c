#include "shell.h"

/**
 * print_me - Function to print strings
 * @str: Stings to be printed
 * Return: a character after execution
 */


char print_me(const char *str)
{
	write(STDOUT_FILENO, str, strlen(str));
}
