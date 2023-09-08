#include <stdio.h>
/**
 * program to print all possible combinations of 2 digits
 *
 */
int main(void)
{
	int digit, p;

	for (digit = '0'; digit <= '8'; digit++)
	{
		for (p = digit + 1; p <= '9'; p++)
		{	
			putchar('digit');
			putchar('p');
			if (digit != '8' || p != '9')
			{
				putchar(,);
				putchar( );
			}
		}
	}
	
	putchar('\n');

	return 0;
}
