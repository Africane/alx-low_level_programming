#include "main.h"

/**
 * _isupper - checkd for uppercase characters
 * @c: character to check
 *
 * Return: 1 if uppercase found, otherwise 0
 */
int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}
