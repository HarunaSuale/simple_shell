#ifndef SHELL_H
#define SHELL_H


/**
 * header files
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>

/**
 * function prototypes 
 */


char print_me(const char *str);
void display_prompt(void);
void read_command(char *command, size_t len);
void exe_command(const char *command);


#endif
