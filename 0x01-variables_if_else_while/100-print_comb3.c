#include <stdio.h>
/**
 * program to print all possible different combinations of two last digits
 *
 */
int main(void)
{
	int digit, p;

	for (digit = '0'; digit < '9'; digit++)
	{
		for (p = digit + 1; p <= '9'; p++)
		{
			if (p != digit)
			{
				putchar(digit);
				putchar(p);

				if (digit == '8' && p == '9')
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
