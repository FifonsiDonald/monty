#include "main.h"
/**
 * pall - prints all stack elements
 * @head: head
 * @num: line number
 * Return: none
 */
void pall(unsigned int num, stack_t **head)
{
	stack_t *cur_head;
	cur_head = *head;
	(void) num;

	if (head == NULL)
		return;
	while (cur_head)
	{
		printf("%d\n", cur_head->n);
		cur_head = cur_head->next;
	}
}
