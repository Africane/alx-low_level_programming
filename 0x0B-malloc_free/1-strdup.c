#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - copies string given as parameter
 * @str: string to be duplicated
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */

char *_strdup(char *str)
{
	/*Check for NULL input*/
	if (str == NULL)
		return (NULL);

	unsigned int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	/*Allocate memory for the duplicate string*/
	char *duplicate = (char *)malloc((length + 1) * sizeof(char));

	/*Check for memory allocation failure*/
	if (duplicate == NULL)
		return (NULL);

	/*Copy the content of the input string to the duplicate*/
	for (unsigned int i = 0; i <= length; i++)
	{
		duplicate[i] = str[i];
	}

	return (duplicate);
}
