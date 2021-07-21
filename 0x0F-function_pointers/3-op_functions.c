#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - the main function
 * @a: The first number.
 * @b: The second number
 *
 * Description: Returns the sum of two numbers.
 * Return: The sum of a and b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - the main function
 * @a: The first number.
 * @b: The second number.
 *
 * Description: Returns the difference of two numbers.
 * Return: The difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - the main function
 * @a: The first number.
 * @b: The second number.
 *
 * Description:  Returns the product of two numbers.
 * Return: The product of a and b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - the main function
 * @a: The first number.
 * @b: The second number.
 *
 * Description: returns the result of dividing a by b
 * Return: The quotient of a and b.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - the main function
 * @a: The first number.
 * @b: The second number.
 *
 * Description:  Returns the remainder of the division of two numbers.
 * Return: The remainder of the division of a by b.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
