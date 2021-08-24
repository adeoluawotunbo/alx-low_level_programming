#include "holberton.h"

/**
 * _abs - a function that computes the absolute value of an integer n.
 *
 * @n: parameter passed in the function
 *
 * Return: Always(0) Success
 */

int _abs(int n)
{
	if (n < 0)
	{
		n *= -1;
		return (n);
	}
	else
	{
		n *= 1;
		return (n);
	}
}
