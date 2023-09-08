#include <stdio.h>
/**
 * main - entry point
 *
 * program to print alphabet in lowercase
 *
 * then in uppercase
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z') 
	{
		putchar(letter);
		letter++;
	}

	letter = 'A';

	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
