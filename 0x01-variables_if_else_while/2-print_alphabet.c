#include <stdio.h>
/**
 * main - prints alphabet in lowercase
 *
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z') {
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
