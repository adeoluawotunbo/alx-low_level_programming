#include "lists.h"

/**
 * get_nodeint_at_index - return the nth node of a listint_t linked list.
 *
 * @head: the pointer to the struct
 * @index: index of the node starting at zero
 *
 * Return: the nth node of a linked list and if the node does
 * not exist return NULL.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int check = 0;

while (head != NULL)
{
if (check == index)
{
return (head);
}
check++;
head = head->next;
}
return (NULL);
}
