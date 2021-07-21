#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - the main function
 * @array: first parameter
 * @size: the size of the array
 * @action: a pointer to the function array_iterator
 *
 * Description: a function that executes a function given as a
 * parameter on each element of an array.
 * Return: return nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))

{

unsigned int i;

if (array && action)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
