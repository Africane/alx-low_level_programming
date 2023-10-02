#include <stdio.h>

/**
 * main - entry point of the program
 * @argc: number of cli args
 * @argv: array of strings containing cli args
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	/*loop through all cli args*/
	for (int i = 0; i < argc; i++)
	{
		/*print each arg followed by a new line*/
		printf("%s\n", argv[i]);
	}

	return (0);
}
