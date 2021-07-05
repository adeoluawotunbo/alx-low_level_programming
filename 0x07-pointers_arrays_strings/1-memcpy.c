#include "holberton.h"

/**
 * *_memcpy - main function.
 * @dest: Pointer to destination
 * @src: pointer to the source
 * @n: Number of bytes to copy
 *
 * description: this function copies memory 
 * 
 * Return: A pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
