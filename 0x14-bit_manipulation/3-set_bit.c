#include "main.h"
/**
 * set_bit - Sets the value of given index to 1.
 * @n: bit.
 * @index: start at 0.
 *
 * Return: - -1.Otherwise - 1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
		return (-1);
	*n |= 1UL << index;
	return (1);
}
