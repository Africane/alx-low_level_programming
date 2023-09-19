#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints every character of a string, starting with 1st character
 * followed by a new line
 * @str: string to print the chars from
 */
void puts2(char *str)
{
	int len, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i += 2)
	{
		putchar(str[i]);
	}

	putchar('\n');
}
