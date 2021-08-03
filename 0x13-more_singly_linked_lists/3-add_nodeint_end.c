#include "lists.h"
/**
 * add_nodeint_end - this function adds a new node at the end
 * of a listint-t list
 *
 * @head: the pointer that points to the struct
 * @n: integer in the struct
 *
 * Return: the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newnode;
listint_t *point;

	if (&*head == NULL)
	{
		return (NULL);
	}
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		point = *head;

		while (point->next != NULL)
		{
			point = point->next;
		}
	point->next = newnode;
}
return (*head);
}
