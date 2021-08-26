#include "holberton.h"

/**
 * puts_half - a function that prints half of a string, followed
 * by a new line; The function should print the second half of the
 * string; If the number of characters is odd, the function should
 * print the last n characters of the string,
 * where n = (length_of_the_string - 1) / 2
 *
 * @str: pointer to the inputted string.
 */

void puts_half(char *str)
{
	int i = 0;
	int n;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 1)
	{
		n = (i + 1) / 2;
		while (str[n] != '\0')
		{
			_putchar(str[n]);
			n++;
		}
	}

	else
	{
		n = (i / 2);
		while (str[n] != '\0')
		{
			_putchar(str[n]);
			n++;
		}
	}
	_putchar('\n');
}
