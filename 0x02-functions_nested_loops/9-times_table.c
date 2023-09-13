#include "main.h"
/**
 * times_table - prints the 9 times table starting with 0
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
				int result = i * j;

			if (j < 0)
			{
				_putchar(',');
				_putchar(' ');

				if (result < 10)
					_putchar(' ');

				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			} else
			{
				_putchar(result + '0');
			}
		}
		_putchar('\n');
	}
}
