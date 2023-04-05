#include "main.h"
#include <stdio.h>
/**
 * prime - Checks if a number is divisible.
 * @n: The number to be checked.
 * @d: The divisor.
 * is_prime_number: number
 * Return: If the number is divisible - 0.
 *         If the number is not divisible - 1.
 */
int prime(int n, int d);


/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to be checked.
 * prime: function
 * Return: If the integer is not prime - 0.
 *         If the number is prime - 1.
 */
int is_prime_number(int n)
{
	return (prime(n, 2));
}

int prime(int n, int d)
{
	if (d >= n && n > 1)
		return (1);
	else if (n % d == 0 || n <= 1)
		return (0);
	else
		return (prime(n, d + 1));
}
