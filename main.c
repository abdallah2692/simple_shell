#include "sshell.h"
/**
 * main - entry point
 *
 * Return: (void)
 */
int main(void)
{
	int num = 100;
	char *lineptr;

	while (1)
	{
		_prompt();
		lineptr = _read(&num);
		
		if (num == -1)
		{
			_printf("\n");
			break;
		}
		_execute(lineptr);
	}

	free(lineptr);

	return (EXIT_SUCCESS);
}
