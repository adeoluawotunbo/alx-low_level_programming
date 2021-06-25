#include "holberton.h"

/**
 * print_most_numbers - print numbers from 0 - 9 except from 2 and 4
 * Return : This is a void function, so no return value
 */

void print_most_numbers(void)
{
int numbers;

for (numbers = 48; numbers <= 57; numbers++)
{
if (numbers != 50 && numbers != 52)
{
_putchar(numbers);
}
}
_putchar('\n');
}
