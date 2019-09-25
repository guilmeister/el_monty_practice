#include "monty.h"

void (*get_function(char *s))
{
        instruction_t functions[] = {
		{"push", push},
                {"pall", pall},
                /*{"pint", pint},
                {"pop", pop},
                {"swap", swap},
                {"add", add},
                {"nop", nop},*/
                {NULL, NULL}
        };
        int i = 0;
        char *func;
	int argument;

        func = strtok(s, " \n");
        while (func != NULL)
        {
                printf("From get function: %s\n", func);
                argument = atoi(strtok(NULL, " \n"));
		printf("From get fucntion: %d\n", argument);
		break;
        }
        while (functions[i].opcode != NULL)
        {
                if (functions[i].opcode == s)
                        return (functions[i].f);

                i++;
        }
	return (NULL);
}
