#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to the array of integers
 * @n: the number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i, temp;
	
	for (i = 0; i < n / 2; i++)
	{
		/*Swap the elements at i an (n - i - 1)*/
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}

}
