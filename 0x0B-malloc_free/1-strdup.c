#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter.
 * @str: The string to be copied.
 *
 * Return: If str == NULL or insufficient memory is available - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	int i = 0, s = 0;
	char *n;

	if (str == NULL)
		return (NULL);

	for (; str[s] != '\0'; s++)
	;
	n = malloc(s * sizeof(*str) + 1);

	if (n == 0)
		return (NULL);

	else
	{
		for (; i < s; i++)
			n[i] = str[i];
	}
	return (n);
}
