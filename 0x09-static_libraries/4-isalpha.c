#include "holberton.h"

/**
 * _isalpha - checking for alphabetic character
 * @c: character to be checked
 * 
 * Description: isalpha() checks for an alphabetic character;
 * in the standard "C" locale, it is equivalent to
 * (isupper(c) || islower(c)).
 * Return: Always(0) Success
 */

int _isalpha(int c)

{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
