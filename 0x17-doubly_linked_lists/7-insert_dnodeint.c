#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at
 * a given position
 *
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = NULL, *new = NULL;
	unsigned int i = 1;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (*h)
	{
		if (idx == 0)
		{
			new = add_dnodeint(h, n);
			return (new);
		}
		current = *h;
		while (current)
		{
			if (i == idx)
			{
				new->next = current->next;
				current->next = new;
				new->prev = current;
				if (new->next != NULL)
					(new->next)->prev = new;
				return (new);
			}
			current = current->next;
			i++;
		}
		return (NULL);
	}
	*h = new;
	return (new);
}
