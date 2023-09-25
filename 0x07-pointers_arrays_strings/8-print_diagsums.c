#include <stdio.h>

/**
 * print_diagsums = prints the sum of the two diagonals of a square matrix
 * @a: pointer to the square matrix of integers
 * @size: the size of the matrix (number of rows or columns)
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0;

	for (int i = 0; i < size; i++)
	{
		/*sum of the main diagonal*/
		sum1 += a[i * size + i];
		/*sum of the other diagonal*/
		sum2 += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", sum1, sum2);
}

int main(void)
{
	int matrix[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};

	print_diagsums((int *)matrix, 3);

	return (0);
}
