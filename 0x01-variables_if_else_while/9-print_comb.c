#include <stdio.h>
/**
 * program to print all possible combinations numbers of single-digit numbers
 *
 */
int main(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
		if (digit != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return 0;
}
