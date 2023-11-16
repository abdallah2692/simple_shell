#include "sshell.h"
/**
 * _read - reads the input
 *
 * @num: the number of characters read
 *
 * Return: the input string (lineptr)
 */
char *_read(int *num)
{
	size_t size = 0;
	char *lineptr = NULL;

	*num = getline(&lineptr, &size, stdin);
	if (*num == -1)
	{
		perror("error in getline function");
		exit(EXIT_FAILURE);
	}

	return (lineptr);
}
