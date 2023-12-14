#include "main.h"
#include <stdio.h>

/**
 * fetch_bit - retrieve the value of a bit at a specified index
 * @num: number to assess
 * @bit_index: index (starting from 0) of the bit to retrieve
 * Return: Value of the bit at the index, or -1 if an error occurs
 */
int fetch_bit(unsigned long int num, unsigned int bit_index)
{
	unsigned long int bit_value;

	if (bit_index > 64)
		return (-1);

	bit_value = num >> bit_index;

	return (bit_value & 1);
}

