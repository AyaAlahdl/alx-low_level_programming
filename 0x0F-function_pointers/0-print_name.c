#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_name - Prints a name.
 * @name: The name to be printed.
 * @f: A pointer to a function that prints a name.
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
		f(name);
}
