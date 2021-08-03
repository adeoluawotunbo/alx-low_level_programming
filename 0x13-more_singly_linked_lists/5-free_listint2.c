#include "lists.h"

/**
 * free_listint2 - this function frees a listint_t list.
 * and sets the head to NULL
 *
 * @head: the pointer to the struct
 *
 * Return: the number of elements
 */

void free_listint2(listint_t **head)
{
listint_t *f;

if (head == NULL)
{
return;
}

while (*head != NULL)
{
f = *head;
*head = f->next;
free(f);
}
}
