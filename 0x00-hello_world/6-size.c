#include <stdio.h>

/*
 * main -this is main function
 *
 * return: zero
 *
 */

int main(void)
{
	char a; float b; long int c; long long int d; int e;

	printf("Size of a char: %lu  byte(s)", sizeof(char));
	printf("Size of a int: %lu  byte(s)", sizeof(int));
	printf("Size of a long int: %lu  byte(s)", sizeof(long int));
	printf("Size of a long long int: %lu  byte(s)", sizeof(long long int));
	printf("Size of a float: %lu  byte(s)", sizeof(float));
	return (0);
}
