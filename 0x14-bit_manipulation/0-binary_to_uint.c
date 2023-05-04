#include "main.h"



/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 *
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, mult = 1;
	int l;

	if (!b)
		return (0);
	for (l = 0; b[l];)
		l++;

	for (l -= 1; l >= 0; l--)
	{
		if (b[l] != '0' && b[l] != '1')
			return (0);

		n += (b[l] - '0') * mult;
		mult *= 2;
	}
	return (n);
}
