#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins to
 *        make change for an amount of money.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If the number of arguments is not exactly one - 1.
 *         Otherwise - 0.
 */
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i, lcents = 0, m = atoi(argv[1]);
		int c[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (m >= c[i])
			{
				lcents += m / c[i];
				m = m % c[i];
				if (m % c[i] == 0)
				{
					break;
				}

			}
		}
		printf("%d\n", lcents);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
