#include <stdio.h>

/*Define the SUM macro*/
#define SUM(x, y) ((x) + (y))

int main(void)
{
	int a = 5;
	int b = 7;
	int result = SUM(a, b);

	printf("The sum of %d and %d is ^Write a function-like macro SUM(x, y) that computes the sum of the numbers x and %d\n", a, b, result);
	return (0);
}
