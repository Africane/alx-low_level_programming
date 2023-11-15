#include "main.h"

/**
 * wildcmp_recursive - compares 2 strings, returns 1 if identical
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 1 if strings are identical, otherwise 0
 */

int wildcmp_recursive(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2 || *s2 == '*')
		return (wildcmp_recursive(s1 + 1, s2 + 1));
	return (0);
}

/**
 * wildcmp - compares 2 strings, returns 1 if identical
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 1 if identical, 0 if otherwise
 */

int wildcmp(char *s1, char *s2)
{
	return (wildcmp_recursive(s1, s2));
}
