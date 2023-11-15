#include "main.h"
#include <stdio.h>

/**
 * _puts_rev_recursion(char *s) - prints a string in reverse
 * @s: string to print
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar('\n');
		return;
	}

	putchar(*s);
	_print_rev_recursion(s + 1);
}
