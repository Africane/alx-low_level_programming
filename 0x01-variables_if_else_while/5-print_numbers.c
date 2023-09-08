#include <stdio.h>
/**
 * main - entry point
 *
 * program to print single digit numbers of base 10 starting from 0
 *
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++) {
		putchar(i + '0');
	}

	putchar('\n');

	return (0);
}
