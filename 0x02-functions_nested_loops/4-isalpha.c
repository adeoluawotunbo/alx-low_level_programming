#include "holberton.h"

/**
 * _isalpha - function that checks for alphabetic character.
 *
 * @c: character to be checked by function
 *
 * Return: Returns 1 if c is a letter, lowercase or uppercase and
 * Returns 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c <= 122 && c >= 97)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
