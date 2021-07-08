#include "holberton.h"

/**
 * _print_rev_recursion - The main function
 * @s: the string to be written in reverse
 *
 * Description: A function that prints a string in reverse
 * Return: recursively until there is n character
 */

void _print_rev_recursion(char *s)

{
if (*s == '\0')
return;
_print_rev_recursion(s+1);
_putchar(*s);
}
