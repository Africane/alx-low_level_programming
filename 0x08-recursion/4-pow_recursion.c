#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to power y
 * @x: figure to be raised
 * @y: figure to raise x by
 *
 * Return: -1 of y is lower than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
