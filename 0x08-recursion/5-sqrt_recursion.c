#include "main.h"

/**
 * _sqrt_helper - helper function for calculating the square root recursively
 * @n: the number for which to find the square root
 * @x: the current estimate for the square root
 * Return: the square root estimate, or -1 if n doesn't have a natural square
 * root
 */

int _sqrt_helper(int n, int x)
{
	if (x * x == n)
		return (x);
	if (x * x > n || x > n)
		return (-1);
	return (_sqrt_helper(n, x + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the nnumber for which to find the square root
 * Return: the natural square root of n, or -1 if n does not have a natural
 * square root
 */

int _sqrt_recursion(int n)
{
	return (n < 0 ? -1 : n == 0 ? 0 : _sqrt_helper(n, 1));
}
