#include "holberton.h"

/**
 * rev_string -  a function that reverses a string.
 *
 * @s: pointer to the string to be reversed
 */

void rev_string(char *s)
{
	int i, count, l;
	char b;

	for (i = 0; s[i] != '\0'; i++)
		;

	l = i;
	for (i--, count = 0; count < l / 2; i--, count++)
	{
		b = s[count];
		s[count] = s[i];
		s[i] = b;
	}
}
