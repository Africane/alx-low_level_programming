#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints a chessboard
 * @a: 2D array representing the chessboard
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			/*assuming putchar prints a single character*/
			putchar(a[i][j]);
		}
		/*Move to the next row*/
		putchar('\n');
	}
}
