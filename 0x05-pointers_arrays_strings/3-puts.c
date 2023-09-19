#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string then a new line to the stdout
 * @str: pointer to the string to print
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
