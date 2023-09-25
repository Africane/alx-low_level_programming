#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: pointer to the string to search
 * @c: the character to locate
 *
 * Return: pointer to the first occurence of the character c in the string s
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			/*found the character, return a pointer to it*/
			return (s);
		}
		/*move to the next character in the string*/
		s++;
	}

	if (*s == c)
	{
		/*check for the terminating null character*/
		return (s);
	}

	/*character not found*/
	return (NULL);
}
