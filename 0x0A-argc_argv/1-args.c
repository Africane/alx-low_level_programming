#include <stdio.h>

/**
 * main - entry point of the program
 * @argc: number of cli args
 * @argv: array of strings containing cli args
 * Return: 0 (Success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	/*print the value of argc*/
	printf("%d\n", argc - 1);

	return (0);
}
