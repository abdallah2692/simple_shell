#include "sshell.h"
/**
 * _printf - print data
 * @string: pointer to string
 * Return: void
 */

void _printf(const char *string)
{
	write(STDOUT_FILENO, string, strlen(string));
}

/**
 * _prompt - display prompt
 *
 * Return: void
 */

void _prompt(void)
{
	_printf("($) ");
}
