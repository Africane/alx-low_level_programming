#include "main.h"

/**
 * infinite_add - adds 2 numbers represented as strings
 * @n1: the first number as a string
 * @n2: the second number as a string
 * @r: the buffer to store the result
 * @size_r: the size of the buffer
 *
 * Return: a pointer to the result (r) or 0 if the result cannot fit in r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;
	int i, j;
	int len_n1 = 0;
	int len_n2 = 0;

	/*calculate the lengths of n1 and n2*/
	while (n1[len_n1])
		len_n1++;

	while (n2[len_n2])
		len_n2++;

	/*check if the result can fit in the buffer*/
	if (len_n1 + 1 > size_r || len_n2 + 1 > size_r)
		return (0);

	/*start from the least significant digits and add*/
	for (i = len_n1 - 1, j = len_n2 - 1; i >= 0 || j >= 0 || carry; i--, j--)
	{
		int digit1 = (i >= 0) ? n1[i] - '0' : 0;
		int digit2 = (j >= 0) ? n1[j] - '0' : 0;

		int sum = digit1 + digit2 + carry;

		/*update carry for next calculation*/
		carry = sum / 10;

		/*store the result digit in r*/
		if (i + 1 < size_r)
			r[i + 1] = (sum % 10) + '0';
		else
			return (0);
	}

	/*Null-terminate the result string*/
	r[len_n1 + 1] = '\0';

	return (r);
}
