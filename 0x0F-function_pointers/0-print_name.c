#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - The main function
 * @name: input parameter for name
 * @f: represents a function pointer
 *
 * Description: A function that prints a name
 * Return: return nothing
 */

void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
{
f(name);
}
}
