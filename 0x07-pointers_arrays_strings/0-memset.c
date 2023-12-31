#include "main.h"

/**
 * _memset - file memory with a constant byte
 * @s: Pointer to the memory area to be filled
 * @b: the constatnt byte to fill the memory
 * @n: number of bytes to fill
 *
 * Return: pointer to the filled memory area (s)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
