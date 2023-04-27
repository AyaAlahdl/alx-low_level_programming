#include "lists.h"


/**
 * _strlen - return the lenght of a string.
 * @s: The string whose length to check
 *
 * Return: integer.
 */

int _strlen(char *s)
{

	int i = 0;


	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: The list_t list.
 *
 * Return: The number of nodes in h.
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}

	return (n);
}
