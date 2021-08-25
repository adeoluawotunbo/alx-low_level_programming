#include "holberton.h"

/**
 * print_rev - a function that prints a string, in reverse,
 * followed by a new line.
 *
 *  @s: pointer to the string to be printed.
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	for (i--; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
