#include "main.h"

int _sqrt_recursion_helper(int n, int guess);
/**
 * _sqrt_recursion_helper - helper function performing recursive calculation
 * @n: number whose square root is to be found
 * @guess: result of operation on n
 *
 * Return: -1 if n does not have a natural square root
 */


int _sqrt_recursion_helper(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	if (guess * guess > n)
		return (-1);
	return (_sqrt_recursion_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number whose square root is to be found
 *
 * Return: -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	return (_sqrt_recursion_helper(n, 1));
}
