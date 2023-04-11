#include "main.h"
#include <stdlib.h>

/**
 * _strlen - find length of a string
 * @s: string
 * Return: int
 */

int _strlen(char *s)
{
	int sz = 0;

	for (; s[sz] != '\0'; sz++)
	;
	return (sz);
}
/**
 * str_concat - Concatenates two strings.
 * @s1: The string to be concatenated upon.
 * @s2: The string to be concatenated to s1.
 *
 * Return: If concatenation fails - NULL.
 *         Otherwise - a pointer the newly-allocated space in memory
 *                     containing the concatenated strings.
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i;
	char *m;

	if (s1 == NULL)
		s1 = "\0";

	if (s2 == NULL)
		s2 = "\0";

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	m = malloc((len1 + len2) * sizeof(char) + 1);
	if (m == 0)
		return (0);

	for (i = 0; i <= len1 + len2; i++)
	{
		if (i < len1)
			m[i] = s1[i];
		else
			m[i] = s2[i - len1];
	}
	m[i] = '\0';
	return (m);

}
