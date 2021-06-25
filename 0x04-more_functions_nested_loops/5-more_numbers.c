#include "holberton.h"

/**
 * more_numbers - prints 10 times the number from 0 - 14
 * @counter - Line counter
 * @number - first iteration
 * @number_1 - Second iteration
 * Return: Returns nothing since function is void
 */

void more_numbers(void)
{
int counter;
int numbers;
int numbers_1;

for (counter = 1; counter <= 10; counter++)
{
for (numbers = 0; numbers <= 14; numbers++)
{
numbers_1 = numbers;
if ((numbers_1 / 10) > 0)
{
_putchar((numbers_1 / 10) + '0');
}
_putchar((numbers_1 % 10) + '0');
}
_putchar('\n');
}
}
