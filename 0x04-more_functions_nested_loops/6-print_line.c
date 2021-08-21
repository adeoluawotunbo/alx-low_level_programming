#include "holberton.h"

/**
 * print line - a function that draws a straight line in the terminal.
 *
 * @n: first parameter
 *
 * Return: Return (1) on success.
 */

void print_line(int n)
{
int count;

count = 0;
while (count < n)
{
_putchar('_');
count++;
}
_putchar('\n');
}
