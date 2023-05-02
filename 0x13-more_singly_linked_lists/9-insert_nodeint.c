#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node to a listint_t
 *                           list at a given position.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @idx: The index of the listint_t list where the new
 *       node should be added - indices start at 0.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *node;
	unsigned int i = 0;


	if (!head || !new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (!idx)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	node = *head;
	while (node)
	{
		if (i == idx - 1)
		{
			new->next = node->next;
			node->next = new;
			return (new);
		}
		i++;
		node = node->next;
	}
	free(new);
	return (NULL);
}
