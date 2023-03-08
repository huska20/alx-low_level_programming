#include "main.h"

/**
 * _pow_recursion - raises x to the power of y
 * @v: Number Integer
 * @y: Power
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _pow_recursion(int v, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (v * _pow_recursion(v, y - 1));
}
