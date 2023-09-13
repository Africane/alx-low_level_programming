#include <stdio.h>
/**
 * main - entry point
 * description: program to compute and print sum of multiples
 * return: sum of multiples
 * 
 */
int main()
{
	int limit = 1024;
	int sum = 0;

	for (int i = 1; i < limit; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			sum += i;
		}
	}

	printf("Sum of multiples of 3 or 5 below %d is: %d\n", limit , sum);

	return (0);
}
