#include "main.h"
/**
 * _strcat - Conacatenates two strings
 * @dest: The destination string
 * @src: The source string to be concatenated
 * Return: A pointer to the resulting string 'dest'
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int src_len = 0;
	int i;

	/*Find the length of the destn and src strings*/
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	while (src[src_len] != '\0')
	{
		src_len++;
	}

	/*Concatenate the src string to  the destn string*/
	for (i = 0; i < src_len; i++)
	{
		dest[dest_len + i] = src[i];
	}

	/*Null-terminate the resulting string*/
	dest[dest_len + src_len] = '\0';

	return (dest);
}
