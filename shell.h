#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>
#include <sys/types.h>
#include <sys/wait.h>

void print_me(char *str);
void display_prompt(void);
void exe_command(const char *command);
void read_command(char *command, size_t len);


#endif
