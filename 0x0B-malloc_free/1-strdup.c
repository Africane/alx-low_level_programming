#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicate a string
 * @str: src string
 * Return: pointer to the duplicated string (Success), NULL (Failure)
 */

char *_strdup(char *str)
{
	if (str == NULL)
	{
		/*return NULL if the input string is NULL*/
		return (NULL);
	}

	/*Calculate the length of the input string*/
	size_t len = 0;
	
	while (str[len] != '\0')
	{
		len++;
	}

	/*Allocate memory for the duplicated string (including the null terminator)*/
	char *dup_str = (char *)malloc(len + 1);

	if (dup_str == NULL)
	{
		/*Memory allocation failed, return NULL*/
		return (NULL);
	}

	/*Copy the characters from the source string to the duplicated string*/
	for (size_t i = 0; i <= len; i++)
	{
		dup_str[i] = str[i];
	}

	return (dup_str);
}

int main(void)
{
	char *original = "Hellom world!";
	char *duplicate = _strdup(original);

	if (duplicate != NULL)
	{
		printf("Original: %s\n", original);
		printf("Duplicate: %s\n", duplicate);

		/*free the memory allocated  for the duplicated string*/
		free(duplicate);
	} else 
	{
	printf("Memory allocation failed.\n");
	}

	return (0);
}
