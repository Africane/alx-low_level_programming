#include "main.h"
/**
 * _strncpy - Copies a string to n characters from src to dest
 * @dest: the destination string
 * @src: the source string to be copied
 * @n: the maximum number of characters to copy from src
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	/*fill remaining characters in dest with null lterminators if necessary*/
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}


