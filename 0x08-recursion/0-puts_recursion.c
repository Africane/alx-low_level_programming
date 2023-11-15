/**
 * _puts_recursion - prints string followed by new line using recursion
 * @s: pointer to the string to be printed
 *
 * Return" on success, 0 on error -1
 */

#include "main.h"

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return (0);
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
