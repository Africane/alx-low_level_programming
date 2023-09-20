#include "main.h"
/**
 * _strncat - Concatenates two strings, using at most n bytes from src
 * @dest: the destination string
 * @src: the source string to be concatenated
 * @n: the maximum number of bytes to be appended from src
 * Return: a pointer to the resulting string 'dest'
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i;

	/*Find the length of the destn string*/
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	/*Append at most n bytes from src to destn*/
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}

	/*Null-terminate the resulting string*/
	dest[dest_len + i] = '\0';

	return (dest);
}
