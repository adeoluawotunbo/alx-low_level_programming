#include "holberton.h"

/**
 * print_last_digit - a function that prints the last digit of a number.
 *
 * @n: parameter passed in the function
 *
 * Return: Returns the value of the last digit.
 */

int print_last_digit(int n)
{
	int lastdigit;

	lastdigit = n % 10;
	if (n < 0)
	{
		lastdigit *= -1;
	}
	_putchar(lastdigit + '0');
	return (lastdigit);
}
