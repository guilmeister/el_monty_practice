#include "monty.h"
/**
 * pop - deletes top node on stack
 * @h: top of stack
 * Return: NULL
 */
void pop(const stack_t *h)
{
	const stack_t *top = h;
	const stack_t *topNext = h->next;
	const stack_t *topPrev = h->prev;

	/* if h == NULL */
	/* if *h == NULL */
	h = h->prev;
	free(topNext);
	free(topPrev);
	free(top);
}
