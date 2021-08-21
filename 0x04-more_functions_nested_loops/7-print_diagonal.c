#include "holberton.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 *
 * @n: number of times the '\' char is printed
 *
 * Return: return (1) on success.
 */

void print_diagonal(int n)
{
	int c, i;

	c = 0;

	while (n > 0)
	{
		i = c;
		while (i > 0)
		{
			_putchar(' ');
			i--;
		}
		_putchar(92);
		_putchar('\n');
		c++;
		n--;
	}
	if (c < 1)
		_putchar('\n');
}
