#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: indicates the number of memory to be allocated
 *
 * Description: function that allocates memory using malloc
 * Return: Returns a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)

{
void *g;
g = malloc(b);

if (g == NULL)
{
exit(98);
}
return (g);
}
