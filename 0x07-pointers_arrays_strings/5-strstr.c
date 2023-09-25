#include "main.h"
#include <stddef.h>

/**
 * _strstr - locate a substring in a substring
 * @haystack: pointer to the string to search within
 * @needle: pointer to the substring to locate
 *
 * Return: pointer to the beginning of the located substring or NULL if the
 * substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	if (*needle == '\0')
		return (haystack);

	while (*haystack)
	{
		h = haystack;
		n = needle;

		while (*n && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);

		haystack++;
	}

	/*substring not found*/
	return (NULL);
}
