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
		error_handler("use_err", "", "");
        fdopen = open(filename, O_RDWR);
        if (fdopen == -1)
                error_handler("fopen_error" , av[1], "");
        /*if opcode reader returns -1
	 error_handler("op_err", line, "", lineNumber);
	 */

        /*if malloc(len of line) = NULL
	 error_handler("malloc_err", "", "", 0*/
        return (EXIT_SUCCESS);
}
