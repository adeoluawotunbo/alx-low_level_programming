#include "holberton.h"

/**
 * print line - a function that draws a straight line in the terminal.
 * @n: first parameter
 *
 * Return: Returns nothing since function is void
 */

void print_line(int n)
{
	int c;

	count = 0;
	while (count < n)
	{
		_putchar('_');

		count++;
	}
	_putchar('\n');
}
