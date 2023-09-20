#include "main.h"

/**
 * leet - encode a string into "1337" using specified rule
 * @str: the string to encode
 * Return: a pointer to the resulting encoded string
 */

char *leet(char *str)
{
	char *ptr = str;
	char *leet_chars = "aAeEoOtTlL";
	char *leet_replacements = "4433007711";

	while (*ptr)
	{
		for (int i = 0; leet_chars[i]; i++)
		{
			if (*ptr == leet_chars[i])
			{
				*ptr = leet_replacements[i];
				break; /*Exit the loop once replaced*/
			}
		}
		ptr++;
	}

	return (str);
}
