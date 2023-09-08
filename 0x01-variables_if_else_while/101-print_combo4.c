#include <stdio.h>

/**
 *
 * program to print all possible different combinations of 3 digits
 *
 */
int main(void)
{
	int digit, p, q;

	for (digit = '0'; digit < '9'; digit++)
	{
		for (p = digit + 1; p <= '9'; p++)
		{
			for (q = p + 1; q <= '9'; q++)
			{
				if ((p != digit) != q)
				{
					putchar(digit);
					putchar(p);
					putchar(q);

					if (digit == '7' && p == '8')
						continue;

					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
