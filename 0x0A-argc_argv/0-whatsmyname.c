#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: counts args given
 * @argv: argument vector
 *
 * Return: 0 if successful, 1 if there is an error
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
		return (0);
	fprintf(stderr, "Error: argc is not greater thatn 0/n");
	return (1);
}
