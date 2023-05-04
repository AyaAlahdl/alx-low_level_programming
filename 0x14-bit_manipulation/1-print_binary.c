#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */

void print_binary(unsigned long int n)
{
	int i, flag = 0;

	for (i = 63; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			flag = 1;
			break;
		}
	}
	if (flag)
	{
		for (; i >= 0; i--)
		{
			if ((n >> i) & 1)
				_putchar('1');
			else
				_putchar('0');
		}
	}
	else
	{
		_putchar('0');
	}
}
