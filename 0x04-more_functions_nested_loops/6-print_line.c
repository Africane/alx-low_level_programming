#include "main.h"
#include <stdio.h>

/**
 * print_line - draw a straight line in the terminal
 * @n: number of times
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		putchar('_');
	}
	putchar('\n');
}
