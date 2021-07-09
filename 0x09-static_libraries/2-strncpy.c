#include "holberton.h"
/**
 * _strncpy - copies a string.
 * @dest:destination string.
 * @src:source string.
 * @n:size to copy from src.
 * 
 * Description: The strncpy() function copies n bytes
 * of the string pointed to by src, including the
 * terminating null byte ('\0'), to the buffer pointed to by dest
 * Return: pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for ( ; i < n; i++)
{
dest[i] = '\0';
}

return (dest);
}
