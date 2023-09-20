#include "main.h"

/**
* leet - encodes a string into "1337" using specified rules
* @str: the string to encode
* Return: a pointer to the resulting strinf
*/

char *leet(char *str)
{
	char *ptr = str;
	char leet_map[256] = {0}; /*Initialize char mapping array*/

	/*Initialize the char mapping for lowercase letters*/
	leet_map['a'] = leet_map['A'] = '4';
	leet_map['e'] = leet_map['E'] = '3';
	leet_map['o'] = leet_map['O'] = '0';
	leet_map['t'] = leet_map['T'] = '7';
	leet_map['l'] = leet_map['L'] = '1';

	/*First loop: iterate through the string to apply encoding*/
	while (*ptr)
	{
		if (leet_map[(unsigned char)*ptr])
		{
			*ptr = leet_map[(unsigned char)*ptr];
		}
		ptr++;
	}

	return (str);
}
