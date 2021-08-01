#include "holberton.h"

/**
 * _strcat - a function that concatenates two strings and adds a
 * terminating null byte.
 *
 * @dest: string 1
 * @src: string 2 that is appended to dest
 *
 * Return: Returns a pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
int x;
int y;

x = 0;
while (dest[x] != '\0')
{
++x;
}

y = 0;
for (; src[y] != '\0'; y++, x++)
{
dest[x] = src[y];
}
dest[x] = '\0';
return (dest);
}.
