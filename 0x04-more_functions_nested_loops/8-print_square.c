#include "holberton.h"

/**
 * print_square - a function that prints a square, followed by a new line.
 *
 * @size: the size of the square
 *
 * Return: return 1 on success.
 */

void print_square(int size)
{
	int x, y;

	y = 0;

	if (size < 1)
		_putchar('\n');

	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			_putchar('#');
			x++;
		}
		_putchar('\n');
		y++;
	}
}
