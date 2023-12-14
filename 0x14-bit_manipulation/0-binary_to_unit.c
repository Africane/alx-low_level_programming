#include "main.h"
#include <stdio.h>

/**
 * convert_binary_to_uint - converts a binary number to an unsigned int
 * @binary_str: input binary string
 * Return: converted decimal number or 0 if there is an unconvertible character
 */
unsigned int convert_binary_to_uint(const char *binary_str)
{
	unsigned int decimal_num, power;
	int bit_length;

	if (binary_str == NULL)
		return (0);

	for (bit_length = 0; binary_str[bit_length]; bit_length++)
	{
		if (binary_str[bit_length] != '0' && binary_str[bit_length] != '1')
			return (0);
	}

	for (power = 1, decimal_num = 0, bit_length--; bit_length >= 0; bit_length--, power *= 2)
	{
		if (binary_str[bit_length] == '1')
			decimal_num += power;
	}

	return (decimal_num);
}

