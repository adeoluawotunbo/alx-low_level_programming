#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked
 * list_t list
 *
 * @h: header pointer
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
size_t numberofelements = 0;
const list_t *temp = h;

while (temp != NULL)
{
temp = temp->next;
numberofelements++;
}
return (numberofelements);
}
