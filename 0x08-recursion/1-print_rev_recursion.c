#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - prints a string in reverse recursively
 * @s: the string to be printed in reverse
 */

void _print_rev_recursion(char *s)
{
	/*if the current character is not the end of the string*/
	if (*s != '\0')
	{
		/*recursively call with the next character*/
		_print_rev_recursion(s + 1);
		/*print the character after the recursive call*/
		putchar(*s);
	}
}
