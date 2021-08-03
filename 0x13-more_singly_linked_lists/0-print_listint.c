#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list.
 *
 * @h: pointer to the listint_t
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)

{
int nodes;

while (h)
{
printf("%i\n", h->n);
h = h->next;
nodes++;
}
return (nodes);
}
