#include "main.h"
#include <string.h>

/**
 * is_palindrome_recursive - performs actual recursive check
 * @start: beginning of string
 * @end: end of string
 * @s: string to check
 *
 * Return: 1 if palindrome, otherwise, 0
 */

int is_palindorme_recursive(char *s, int start, int end);

int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] == s[end])
		return (is_palindrome_recursive(s, start + 1, end - 1));
	return (0);
}

/**
 * is_palindrome - returns 1 if string is palindrome
 * @s: string to check
 *
 * Return: 1 if string is palindrome
 */

int is_palindrome(char *s)
{
	int length = strlen(s);
	return (is_palindrome_recursive(s, 0, length - 1));
}

