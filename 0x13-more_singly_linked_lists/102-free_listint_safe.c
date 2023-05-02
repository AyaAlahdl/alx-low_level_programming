
#include "lists.h"
#include <stdlib.h>

size_t free_listint_safe(listint_t **h);

/**
 * listin_t *find_listint_loop_fl - Counts the number of unique nodes
 *                      in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 *         Otherwise - the number of unique nodes in the list.
 */
listint_t *find_listint_loop_fl(listint_t *head)
{
	listint_t *p, *e;


	if (head == NULL)
		return (NULL);
	for (e = head->next; e != NULL; e = e->next)
	{
		if (e == e->next)
			return (e);
		for (p = head; p != e; p = p->next)
			if (p == e->next)
				return (e->next);
	}
	return (NULL);
}

/**
 * free_listint_safe - Frees a listint_t list safely (ie.
 *                     can free lists containing loops)
 * @h: A pointer to the address of
 *     the head of the listint_t list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *next, *l;
	size_t len;
	int loop = 1;


	if (h == NULL || *h == NULL)
		return (0);
	l = find_listint_loop_fl(*h);

	for (len = 0; (*h != l || loop) && *h != NULL; *h = next)
	{
			len++;
			next  = (*h)->next;
			if (*h == l && loop)
			{
				if (l == l->next)
				{
					free(*h);
					break;
				}
				len++;
				next = next->next;
				free((*h)->next);
				loop = 0;
			}
			free(*h);
	}
	*h = NULL;
	return (len);
}

