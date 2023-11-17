#ifndef SSHELL_H
#define SSHELL_H
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>

void _printf(const char *string);
void _prompt(void);
char *_read(int *num);
void _execute(char* lineptr);

#endif
