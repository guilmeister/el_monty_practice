#include "monty.h"

stack_t *push(stack_t **head, int number)
{
	stack_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(stack_t));
	if (new == NULL)
		return (NULL);

	new->n = number;
	if ((*head) == NULL)
	{
		*head = new;
		return (new);
	}
	new->next = *head;
	(*head)->prev = new;
	new->prev = NULL;
	*head = new;

	return (new);
}
