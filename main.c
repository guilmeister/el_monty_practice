#include "monty.h"

/**
 * main - entry, error checks
 * @ac: arg count
 * @av: args
 * Return: status - success/fail
 */
int main(int ac, char **av)
{
        int fdopen;

        if (ac != 2)
        {
                write(STDERR_FILENO, "USAGE: monty file\n", 17);
                exit(EXIT_FAILURE)
			}
        fdopen = open(filename, O_RDWR);
        if (fdopen == -1)
        {
                write(STDERR_FILENO, "Error: Can't open file ", 23);
                write(STDERR_FILENO, av[1], strlen(av[1]));
                write(STDERR_FILENO, "\n", 1);
                exit(EXIT_FAILURE);
        }
        /*if opcode checker returns -1
          write(STDERR_FILENO, "L", 1);
          write(STDERR_FILENO, line number, strlen(line number));
          write(STDERR_FILENO, ":", 1);
          write(STDERR_FILENO, opcode, strlen(opcode));
          write(STDERR_FILENO, "\n", 1);
          exit(EXIT_FAILURE);*/

        /*if malloc(len of line) = NULL
          write(STDERR_FILENO, "Error: malloc failed\n", 21);
          exit(EXIT_FAILURE);*/
        return (EXIT_SUCCESS);
}
