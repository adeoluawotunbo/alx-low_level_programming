#include "lists.h"
#include <stdio.h>

/**
 * size_t print_list - the main function.
 * @list_t: the list whose element is to be printed
 * @h: a pointer to the list.
 *
 * Description: A function that prints all the elements of a list_t list.
 * return: the number of nodes is to be returned
 */

size_t print_list(const list_t *h)

{
size_t number_Of_Node = 0;
const list_t *temp = h;

while (temp != NULL)

{
printf("[%d] %s\n", temp->len,
temp->str != NULL ? temp->str : "(nil)");
temp = temp->next;
number_of_Node++;
}
return (number_Of_Node);
}
