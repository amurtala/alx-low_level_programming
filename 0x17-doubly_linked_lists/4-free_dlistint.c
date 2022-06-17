#include "lists.h"

/**
 * free_dlistint - frees list
 * @head: head of node
 * Return: no return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = NULL;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
