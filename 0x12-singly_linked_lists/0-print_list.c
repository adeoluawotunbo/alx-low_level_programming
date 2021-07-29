#include "list.h"
#include <stdlib.h>
#include <string.h>

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
	const list_t *tmp;
	unsigned int i;

	tmp = h;
	for (i = 0; tmp; i++)
	{
		printf("[%u] %s\n", tmp->len, tmp->str);
		tmp = tmp->next;
	}
	return (i);
}
