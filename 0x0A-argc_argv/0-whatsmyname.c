#include <stdio.h>
#include "main.h"

/**
 * main - entry point of the program
 * @argc: the number of cli args
 * @argv: array of strings containing the cli args
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	/*Check if at least one argument is provided*/
	if (argc > 0)
	{
		/*print the program name includeing the path*/
		printf("%s\n", argv[0]);
	}

	return (0);

}
