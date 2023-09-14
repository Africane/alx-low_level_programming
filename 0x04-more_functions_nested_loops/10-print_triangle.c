#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle followed by a new line
 * Description: Prints triangles
  *@size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int row, hashes, spaces;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (spaces = size - row; spaces >= 1; spaces--)
			{
				putchar(' ');
			}
			for (hashes = 1; hashes <= row; hashes++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}
