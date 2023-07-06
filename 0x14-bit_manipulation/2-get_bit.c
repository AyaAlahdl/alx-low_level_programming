#include "main.h"
/**
 * get_bit - Gets the valua of given index.
 * @n: Bit.
 * @index: start at 0.
 *
 * Return: -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return ((n >> index) & 1);
}

