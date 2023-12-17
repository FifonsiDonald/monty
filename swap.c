#include "main.h"
/**
 * swap - swaps two of the satck elements
 * @head: head
 * num: line number
 * Return: no return
 */
void swap(unsigned int num, stack_t **head)
{
	int temp_value;
	stack_t *h = *head;
	stack_t *temp = h->prev;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", num);
		exit(EXIT_FAILURE);
	}

	/*temp  = h->next;
	h->n = h->prev->n;
	h->prev->n = temp;*/

	temp_value = h->n;
	h->n = temp->n;
	temp->n = temp_value;
}
