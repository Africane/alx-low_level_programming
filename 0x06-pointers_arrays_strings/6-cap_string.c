#include "main.h"
#include <stdbool.h>

/**
 * is_separator - checks if a char is a word separator
 * @c: the character to check
 * return: true if c is a separator, false otherwise
 */

bool is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";

	for (int i = 0; separators[i]; i++)
	{
		if (c == separators[i])
		{
			return (true);
		}
	}
	return (false);
}

/**
 * cap_string - capitalize all words in a string
 * @str: the string to capitalize
 * Return: a pointer to the resulting string
 */

char *cap_string(char *str)
{
	bool new_word = true;
	char *ptr = str;

	while (*ptr)
	{
		if (is_separator(*ptr))
		{
			new_word = true;	
		}
		else if (new_word && *ptr >= 'a' && *ptr <= 'z')
		{
			*ptr -= 32; /*Converts to uppercase*/
			new_word = false;
		}
		else
		{
			new_word = false;
		}
		ptr++;
	}

	return (str);
}
