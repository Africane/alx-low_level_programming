#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion(char *s) - prints a string followed by a new line
 * @s: the string to be printed
 */

void _puts_recursion(char *s)
{
	/*Base case: end of the string*/
	if (*s == '\0')
	{
		/*print a new line*/
		putchar('\n');
		return;
	}

	/*print the current character*/
	putchar(*s);
	/*recursive call to print the rest of the string*/
	_puts_recursion(s + 1);
}
