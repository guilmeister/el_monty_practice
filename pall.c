#include "monty.h"
/**
 * pall - prints values of all nodes
 * @h: top of stack
 * Return: NULL
 */
void pall(const stack_t *h)
{
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
