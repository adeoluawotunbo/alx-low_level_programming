#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - the main function.
 *
 * @h: a pointer to the list.
 *
 * Description: A function that prints all the elements of a list_t list.
 *
 * Return: the number of nodes.
 */

size_t print_list(const list_t *h)
{
size_t number_Of_Node = 0;
const list_t *temp = h;

while (temp != NULL)
{
if (temp->str == NULL)
{
printf("[0] (nil)\n");
temp = temp->next;
number_Of_Node++;
}
else
{
printf("[%u] %s\n", temp->len, temp->str);
temp = temp->next;
number_Of_Node++;
}
}
return (number_Of_Node);
}
