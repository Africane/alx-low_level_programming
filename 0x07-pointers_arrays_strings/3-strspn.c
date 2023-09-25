#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the string to search
 * @accept: pointer to the strinf containing acceptable characters
 *
 * Return: the number of bytes in the initial segment of s which consists only
 * of bytes from accept
 */

unsigned int _strspn(char *s, char* accept) 
{
	unsigned int count = 0;
	int isAcceptable = 0;

	while (*s)
	{
		/*Reset flag for each character in s*/
		isAcceptable = 0;

		for (int i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				isAcceptable = 1;
				break;
			}
		}

		if (isAcceptable)
		{
			count++;
			s++;
		}
		else
		{
			/*Stop when a character not in accept is ecountered*/
			break;
		}
	}

	return (count);
}
