#include "monty.h"

void pall(const stack_t *h)
{
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
