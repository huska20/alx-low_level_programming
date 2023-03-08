#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * @k: string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _print_rev_recursion(char *k)
{
	if (*k != '\0')
	{
		_print_rev_recursion(k + 1);
		_putchar(*k);
	}
}
