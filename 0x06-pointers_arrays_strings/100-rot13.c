#include "main.h"

/**
 * leet - encode a string into "1337" using specified rule
 * @str: the string to encode
 * Return: a pointer to the resulting encoded string
 */

char *leet(char *str)
{
	char *ptr = str;
	char leet_map[256] = {0}; /*initialize char mapping array*/

	/*initialize char mapping array for lowercase letters*/
	leet_map['a'] = leet_map['A'] = '4';
	leet_map['e'] = leet_map['E'] = '3';
	leet_map['o'] = leet_map['O'] = '0';
	leet_map['t'] = leet_map['T'] = '7';
	leet_map['l'] = leet_map['L'] = '1';

	/*first loop: iterate through string to apply encoding*/
	while (*ptr)
	{
		if (leet_map[(unsigned char)*ptr]) /*check if char need encode*/
		{
			*ptr = leet_map[(unsigned char)*ptr];
		}
		ptr++;
	}

	return (str);
}
