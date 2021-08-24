#include <stdio.h>

/**
 * main - a program that computes and prints the sum of all the
 * multiples of 3 or 5 below 1024 (excluded), followed by a new line.
 *
 * Return: 0 on success.
 */

int main(void)
{
	int i;
	int sum_product = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0)
		{
			sum_product += i;
		}
		else if (i % 5 == 0)
		{
			sum_product += i;
		}
	}
	printf("%d\n", sum_product);
	return (0);
}
