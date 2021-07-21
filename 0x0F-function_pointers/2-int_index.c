#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - the main function
 * @array: represents the array
 * @size: the number of elements in the array array
 * @cmp: a pointer to the function to be used to compare values
 *
 * Description: a function that searches for an integer.
 * Return: Always(0) Success; int_index returns the index of the
 * first element for which the cmp function does not return 0;
 * If no element matches, return -1; If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (size > 0 && cmp && size && array)
for (i = 0; i <= size; i++)
if (cmp(array[i]))
return (i);
return (-1);
}
