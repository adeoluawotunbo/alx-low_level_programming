#include "holberton.h"

/**
 * _puts - prints a string followed by a new line to stdout
 * @str: string to be printed
 *
 * Description: puts() writes the string s and a trailing newline to stdout.
 * RETURN: puts() return a nonnegative number on success, or EOF on error.
 */

void _puts(char *str)

{

while (*str)
{
_putchar(*str);
str++;
}
_putchar('\n');
}
