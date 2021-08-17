#include "holberton.h"

/**
 * print_times_table - a function that prints the n times table,
 * starting with 0.
 *
 * @n: parameter to be used
 *
 * Return: Always(0) Success
 */

void print_times_table(int n)
{
	int result, y, x = 0;

	if ((n > 15) || (n < 0))
	return;

	while (x <= n)
	{
		for (y = 0; y <= n; y++)
		{
			result = x * y;
			while (y = 0)
			{
				_putchar(result + '0');
			}
			{
				if (result <= 9)
				{	
					_putchar(' ');
					_putchar(' ');
					_putchar(result + '0');
				}
				else if ((result >= 10) && (result <= 99))
				{
					_putchar(' ');
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
				}
				else
				{
					_putchar((result / 100) + '0');
					_putchar(((result / 10) % 10) + '0');
					_putchar((result % 10) + '0');
				}
				if (y != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
			x++;
		}
	}
}
