#include <stdio.h>
/**
 * main - write a program that finds and prints the sum of the
 * even-valued terms, followed by a new line, considering the
 * terms in the Fibonacci sequence whose values do not exceed
 * 4,000,000.
 *
 * Return: 0 on success.
 */

int main(void)
{
	long first_number = 0, second_number = 1, next_number;
	long even_sum = 0, max = 4000000;
	long i;

	for (i = 0; i < max; i++)
	{
		next_number = second_number + first_number;
		first_number = second_number;
		second_number = next_number;
		if (next_number % 2 == 0)
		{
			even_sum += next_number;
		}
		else if (even_sum == max)
		{
			break;
		}
	}
	printf("%lu\n", even_sum);
	return (0);
}
