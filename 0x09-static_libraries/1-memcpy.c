#include "holberton.h"
/**
 * _memcpy - copies n bytes from memory 
 * area src to memory area dest
 * @dest: memory copied into
 * @src: memory copied from
 * @n: number of bytes to be copied from @src
 *
 * Description: The  memcpy() function copies
 * n bytes from memory area src to memory area dest.
 * Return: returns a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}

