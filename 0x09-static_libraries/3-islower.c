#include "holberton.h"

/**
 * _islower - prints 1 or 0 depending on input
 * @c: character to be checked
 *
 * Description: islower() checks for a lowercase character.
 * Return: Always(0) Success
 */

int _islower(int c)

{

if (c >= 97 && c < 123)
{
return (1);
}
else
{
return (0);
}
}
