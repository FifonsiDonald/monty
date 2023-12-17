#include "main.h"
/**
 * add - add the top two elements on the stack
 * @num: line number
 * @head: head of our stack
 * Return: nothing
 */
void add(unsigned int num, stack_t **head)
{
	int add_to = 0;

	if (!(*head && *head != (*head)->next))
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", num);
		exit(EXIT_FAILURE);
	}
	add_to = (*head)->n + (*head)->next->n;
	(*head)->next->n = add_to;

	*head = (*head)->next;
	(*head)->prev = NULL;
}
