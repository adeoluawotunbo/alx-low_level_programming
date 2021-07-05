#include "holberton.h"

/**
 * *_memset - This is the main function
 * @s: pointer to the buffer
 * @b: The constant byte
 * @n: size in bytes of buffer to be filled
 *
 * Description: This function fills memory area
 * with a constant byte
 *
 * Return: A pointer to memory area s.
 */

char *_memset(char *s, char b, unsigned int n);
{
unsigned int i = 0;

while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
