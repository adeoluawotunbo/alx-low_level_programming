#include <stdio.h>

/**
 * print_array - a function that prints n elements of an array
 * of integers, followed by a new line.
 *
 * @a: pointer to the inputted integer.
 * @n: the number of elements of the array to be printed.
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
