#include "main.h"

/**
 * string_toupper - changes all lowercase letters of string to uppercase
 * @str: the string to convert to uppercase
 * Return: A pointer to the resulting string
 */

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		if (*ptr >= 'a' && *ptr <= 'z')	
		{
			*ptr = *ptr - 'a' + 'A';
		}
		ptr++;
	}

	return (str);
}
