#include "main.h"
/**
 * pop - removes the elment at the top of the stack
 * @head: head
 * @num: line number
 * Return: no return
 */
void pop(unsigned int num, stack_t **head)
{
	if (!head)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", num);
		exit(EXIT_FAILURE);
	}
	else
	{
		*head = (*head)->next;
	}
}
