#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 *
 * Description: Sets the head to NULL.
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *n;

	if (!head)
		return;

	n = *head;
	while (n)
	{
		tmp = n;
		n = n->next;
		free(tmp);
	}
	*head = NULL;
}
