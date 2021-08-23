#include "holberton.h"

/**
 * print_number - a function that prints an integer.
 *
 * @n: inputted number to be printed
 */

void print_number(int n)
{
	unsigned int num, num2;
	int i;
	int anc = 1;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	num = n;
	num2 = num;
	if (num > 9)
	{
		while (num >= 10)
		{
			anc = anc * 10;
			num = num / 10;
		}
		_putchar((num2 / anc) + '0');
		anc = anc / 10;

		for (i = anc; i >= 1; i = i / 10)
			_putchar((num2 / i) % 10 + '0');
	}
	else
		_putchar(num + '0');
}
