#include <stdio.h>
#include <stdlib.h>

/**
 * main: entry point of the program
 * @argc: number of cli args
 * @argv: array of strings containing cli args
 * Return: 0 if successful, 1 if there are not enough args
 */

int main(int argc, char *argv[])
{
	/*Check if the program received 2 arguments*/
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	/*Convert the cli args to integers*/
	int num1 =  atoi(argv[1]);
	int num2 = atoi (argv[2]);

	/*Multiply the 2 numbers*/
	int result = num1 * num2;

	/*Print the result followed by a new line*/
	printf("%d\n", result);

	return (0);
}
