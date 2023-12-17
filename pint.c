#include "main.h"
/**
 * pint - prints head of stack
 * @head: head
 * @num: number
 * Return: none
 */
void pint(unsigned int num, stack_t **head)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't print, stack empty\n", num);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
