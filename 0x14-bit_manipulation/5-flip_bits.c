#include "main.h"
/**
 * flip_bits - Counts the number.
 * @n:  number.
 * @m: flip n to.
 *
 * Return: flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int d = n ^ m;
	unsigned int ct = 0;

	while (d != 0)
	{
		ct += d & 1;
		d >>= 1;
	}
	return (ct);
}
