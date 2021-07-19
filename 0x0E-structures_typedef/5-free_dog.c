#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Free dogs
 * @d: first parameter
 *
 * Description: Function that frees the dogs.
 * Return: Always(0) Success.
 */

void free_dog(dog_t *d)

{

if (d)

{
free(d);
}

}
