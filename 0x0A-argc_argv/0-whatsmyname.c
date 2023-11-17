#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: counts args given
 * @argv: argument vector
 *
 * Return: 0 if successful
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
