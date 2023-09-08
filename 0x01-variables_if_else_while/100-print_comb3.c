#include <stdio.h>
/**
 * program to print all possible combinations of 2 digits
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

				if (digit == '0' && p == '9')
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return 0;
}
