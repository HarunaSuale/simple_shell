#include "shell.h"

/**
 * print_me - Function to print strings
 * @str: Stings to be printed
 * Return: a character after execution
 */


void print_me(char *str)
{
	write(1, str, strlen(str));
}
