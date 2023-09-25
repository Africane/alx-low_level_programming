#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to the string to search
 * @accept: pointer to the string containing acceptable bytes
 *
 * Return: pointer to the byte in s that matched one of the bytes in accept, or
 * NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		for (int i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				/*found a matching byte*/
				return (s);
			}
		}

		/*move to the next chatacter in s*/
		s++;
	}

	/*no matching byte found*/
	return (NULL);
}
