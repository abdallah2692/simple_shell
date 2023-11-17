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
		if (feof(stdin))
		{
			exit(EXIT_SUCCESS);
		}
		else
		{
			perror("Error in getline function");
			exit(EXIT_FAILURE);
		}

	}
	return (lineptr);
}
/**
 * _execute - executing the command
 *
 * @lineptr: the command to be executed
 *
 * Return: void
 */
void _execute(char *lineptr)
{
	pid_t child_pid = fork();
	char *argv[2];

	argv[0] = lineptr;
	argv[1] = NULL;

	if (child_pid == 0)
	{
		if (execve(lineptr, argv, NULL) == -1)
		{
			perror("Error in execve function");
			exit(EXIT_FAILURE);
		}
	}
	else if (child_pid == -1)
	{
		perror("Error in fork function");
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}
}
