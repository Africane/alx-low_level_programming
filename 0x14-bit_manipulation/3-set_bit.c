#include "main.h"

/**
 * assign_bit - sets the value of a bit to 1 at a specified index
 * @num_ptr: pointer to the decimal number
 * @bit_index: index position to modify, starting from 0
 * Return: 1 if successful, -1 if an error occurs
 */
int assign_bit(unsigned long int *num_ptr, unsigned int bit_index)
{
	unsigned long int bit_mask;

	if (bit_index > 64)
		return (-1);

	for (bit_mask = 1; bit_index > 0; bit_index--, bit_mask *= 2)
		;
	*num_ptr += bit_mask;

	return (1);
}

