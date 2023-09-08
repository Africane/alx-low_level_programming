#include <stdio.h>
/**
 * program to print all single digit numbers of base 10 starting from 0
 *
 */
int main(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
		putchar(digit);
	putchar('\n');

	return (0);
}
