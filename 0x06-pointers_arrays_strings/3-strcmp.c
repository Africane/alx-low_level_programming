#include "main.h"
/**
 * _strcmo - Compares 2 strings
 * @s1: the first string to be compared
 * @s2 the second string to be compared
 * Return: an integer less thatn, equal to or greater than zero if s1 is
 * found respectively, to be less than, match or be greater than s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
