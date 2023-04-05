#include "main.h"
/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to return the square root of.
 * @val: root
 * Return: If n has a natural square root - the natural square root of n.
 *         If n does not have a natural square root - -1.
 */
int find_sqrt(int n, int val);
int _sqrt_recursion(int n)
{
	return (find_sqrt(n, 1));
}

/**
 * find_sqrt - Finds the natural square root of an inputted number.
 * @n: The number to find the square root of.
 * @val: The root to be tested.
 *
 * @n: The number to return the square root of.
 * Return: If the number has a natural square root - the square root.
 *         If the number does not have a natural square root - -1.
 */

int find_sqrt(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (find_sqrt(n, val + 1));
	else
		return (-1);
}
