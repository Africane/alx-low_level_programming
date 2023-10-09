#include <stdio.h>

/**
 * ABS(x) - compute the absolute value of a number x
 * @x: the number to compute the absolute value for
 *
 * Return: the absolute value of x
 */

#define ABS(x) ((x) < 0 ? -(x) : (x))

int main(void)
{
	int number = -5;
	int result = ABS(number);

	printf("The absolute value of %d is %d\n", number, result);
	return 0;
}
