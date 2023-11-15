#include "main.h"

/**
 * is_prime_number - returns 1 if input is prime number otherwise 0
 * @n: the number to be checked
 *
 * Return: 1 if number is prime, 0 if otherwise
 */

int is_prime_helper(int n, int advisor);

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - helper function performing actual recursive calculation
 * @n: number to be checked
 * @divisor: number to determine of n is prime or not
 *
 * Return: 1 if prime, otherwise 0
 */

int is_prime_helper(int n, int divisor)
{
	if (divisor * divisor > n)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (is_prime_helper(n, divisor + 1));
}
