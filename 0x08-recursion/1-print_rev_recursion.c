#include "main.h"
#include "stdio.h"
/**
 * _puts_recursion - prints a string, then a new line
 * @s: string to print
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
