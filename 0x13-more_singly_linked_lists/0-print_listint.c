#include "lists.h"

/**
 * print_listint - a function that prints all the elements of
 * a listint_t list.
 *
 * @h: pointer to the listint_t
 *
 * Description: a function thAT PRINTS ALL
 * THE ELEMENTS OF A LIST INT_LIST.
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)

{
int nodes = 0;
while (h != '\0')
{
printf("%d\n", h->n);
h = h->next;
nodes++;
}
return (nodes);
}
