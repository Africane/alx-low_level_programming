#include "main.h"
/**
 * print_alphabet - Entry point
 * description: program to print alphabet in lowercase
 * Return:0 if successful
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;

	}
	_putchar('\n');

}
