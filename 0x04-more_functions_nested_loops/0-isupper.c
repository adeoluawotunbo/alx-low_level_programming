#include "holberton.h"

/**
 * _isupper - Check if parameter c represents an uppercase letter.
 * @c: Int representing a character
 * Return: Always 0.
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
return (0);
}
