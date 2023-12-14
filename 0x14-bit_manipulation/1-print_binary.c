#include "main.h"
#include <stdio.h>

/**
 * display_binary - displays binary representation of a number
 * @decimal_num: decimal number to display as binary
 */
void display_binary(unsigned long int decimal_num)
{
	unsigned long int temp_value;
	int bit_shifts;

	if (decimal_num == 0)
	{
		printf("0");
		return;
	}

	for (temp_value = decimal_num, bit_shifts = 0; (temp_value >>= 1) > 0; bit_shifts++)
		;

	for (; bit_shifts >= 0; bit_shifts--)
	{
		if ((decimal_num >> bit_shifts) & 1)
			printf("1");
		else
			printf("0");
	}
}

