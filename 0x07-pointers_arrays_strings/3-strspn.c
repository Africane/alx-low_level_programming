#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the string to search
 * @accept: pointer to the string containing acceptable characters
 *
 * Return: the number of bytes in the initial segment of s which consists of
 * bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int isAcceptable = 0;

	while (*s)
	{
		/*reset the flag for each character in s*/
		isAcceptable = 0;

		for (int i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				isAcceptable = 1;
				break;
			}
		}

		if (!isAcceptable)
		{
			/*stop when a character not in accept is encountered*/
			break;
		}

		count++;
		s++;
	}

	return (count);
}
