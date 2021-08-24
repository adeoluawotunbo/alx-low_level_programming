#include "lists.h"

/**
 * pop_listint - Delete the head node of a listint_t linked list
 * @head: head of the linked list
 *
 * Description: function that delete the head node of a listint_t linked list
 * Return: the head node's data and if the linked list is empty return 0.
 */

int pop_listint(listint_t **head)

{
listint_t *f;
int nodedata;

if (*head == NULL)
{
return (0);
}

nodedata = (*head)->n;
f = (*head)->next;
free(*head);
*head = f;
return (nodedata);
}
