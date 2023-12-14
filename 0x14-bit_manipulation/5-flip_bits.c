#include "main.h"
#include <stdio.h>

/**
 * determine_flipped_bits - count the number of bits that need to be flipped
 * @first_num: first number
 * @second_num: second number to convert to
 * Return: number of bits that need to be flipped
 */
unsigned int determine_flipped_bits(unsigned long int first_num, unsigned long int second_num)
{
	unsigned long int differing_bits;
	int flip_counter;

	differing_bits = first_num ^ second_num;
	flip_counter = 0;

	while (differing_bits)
	{
		flip_counter++;
		differing_bits &= (differing_bits - 1);
	}

	return (flip_counter);
}

