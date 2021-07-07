#include "holberton.h"

/**
 * @_puts_recursion - the main function
 * @s - the string to be written out
 *
 * Description: the function that prints the string s and a trailing
 * newline to stdout recursively
 *
 * Return: Always 0
 */

void _puts_recursion(char *s)

{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
s++;
_puts_recursion(s);
}
