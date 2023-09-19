#include "main.h"
/**
 * swap_int - swaps the value of 2 integers
 * @a: pointer to the first value
 * @b: pointer to the second value
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
