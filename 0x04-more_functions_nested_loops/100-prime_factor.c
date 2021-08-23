#include <stdio.h>
#include <math.h>

/**
 * main - a program that finds and prints the largest prime
 * factor of the number 612852475143, followed by a new line.
 *
 * Return: 0 on success.
 */

int main(void)
{
	int c;
	long n = 612852475143;

	for (c = (int) sqrt(n); c > 2; c++)
	{
		if (num % c == 0)
		{
			printf("%d\n", c);
			break;
		}
	}

	return (0);
}
