#include "holberton.h"

/**
 * *_strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: character pointer
 * @src: character pointer
 * 
 * Description: The strcpy() function copies the
 * string pointed to by src, including the
 * terminating null byte ('\0'), to the buffer
 * pointed to by dest
 * Return: a pointer to the destination string dest.
 */

char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i]; i++)
{
dest[i] = src[i];
}
dest[i] = src[i];
return (dest);
}
