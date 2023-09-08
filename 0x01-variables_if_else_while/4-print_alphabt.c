#include <stdio.h>
/**
 * main - entry point
 *
 * program to print alphabet in lowercase
 *
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'e' && letter != 'q') {
			putchar(letter);
		}
		letter++;
	}

	putchar('\n');

	return (0);
}
