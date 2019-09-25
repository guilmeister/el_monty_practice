#include "monty.h"

/**
 * main - entry, error checks
 * @ac: arg count
 * @av: args
 * Return: status - success/fail
 */
int main(int argc, char **argv)
{
	char *buffer;
	char *tokens;

	if (argc != 2)
	{	write(STDERR_FILENO, "USAGE: monty file\n", 17);
                exit(EXIT_FAILURE);
	}
	buffer = file_reader(argv[1]);
	tokens = strtok(buffer, " \n");
	while (tokens != NULL)
	{
		printf("%s\n", tokens);
		tokens = strtok(NULL, " \n");
	}
	return (0);
}
