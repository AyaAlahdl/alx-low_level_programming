#include "main.h"

/**
 * move - Checks if a string str matches the postfix of
 *                 another string potentially containing wildcards.
 * @str: The string to be matched.
 * @p: The postfix.
 *
 * Return: If str and postfix are identical - a pointer to the null byte
 *                                            located at the end of postfix.
 *         Otherwise - a pointer to the first unmatched character in postfix.
 */

char *move(char  *str, char *p)
{
	int str_len = strlen_no_wilds(str) - 1;
	int p_len = strlen_no_wilds(p) - 1;

	if (*p == '*')
		it(&p);

	if (*(str + str_len - p_len) == *p && *p != '\0')
	{
		p++;
		return (move(str, p));
	}

	return (p);

}

/**
 * strlen_no_wilds - Returns the length of a string,
 *                   ignoring wildcard characters.
 * @str: The string to be measured.
 *
 * Return: The length.
 */

int strlen_no_wilds(char *str)
{
	int l = 0, i = 0;

	if (*(str + i))
	{
		if (*str != '*')
			l++;

		i++;
		l += strlen_no_wilds(str + i);
	}

	return (l);
}

/**
 * cmp - Compares two strings
 *  @s1: The first string to be compared.
 * @s2: The second string to be compared - may contain wildcards.
 *
 * Return: If the strings can be considered identical - 1.
 *         Otherwise - 0.
 */
int cmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		it(&s2);
		s2 = move(s1, s2);
	}

	if (*s2 == '\0')
		return (1);

	if (*s1 != *s2)
		return (0);

	return (cmp(++s1, ++s2));

}
/**
 * it - Iterates through a string located at a wildcard
 *                until it points to a non-wildcard character.
 * @w: The string to be iterated through.
 */
void it(char **w)
{
	if (**w == '*')
	{
		(*w)++;
		it(w);
	}
}
