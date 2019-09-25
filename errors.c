#include "monty.h"
/**
 * error_handler - prints corresponding error message then exits
 * @name: error tag
 * @var: variable string
 * @var2: variable string
 * @num: variable int
 * Return: void
 */
void error_handler(char *name, char *var, char *var2, int num)
{
	if (name == "use_err")
	{
		void (num);
		void(var);
		void(var2);
		write(STDERR_FILENO, "USAGE: monty file\n", 17);
		exit(EXIT_FAILURE);
	}
	else if (name == "fopen_err")
	{
		void(num);
		void(var2);
		write(STDERR_FILENO, "Error: Can't open file ", 23);
		write(STDERR_FILENO, var, strlen(var));
		write(STDERR_FILENO, "\n", 1);
		exit(EXIT_FAILURE);
	}
	else if (name == "op_err")
	{
		void(var2);
		write(STDERR_FILENO, "L", 1);
		printf("%d", num);
		write(STDERR_FILENO, ":", 1);
		write(STDERR_FILENO, var, strlen(var));
		write(STDERR_FILENO, "\n", 1);
		exit(EXIT_FAILURE);
	}
	else if (name == "malloc_err")
	{
		write(STDERR_FILENO, "Error: malloc failed\n", 21);
		exit(EXIT_FAILURE);
	}
}
