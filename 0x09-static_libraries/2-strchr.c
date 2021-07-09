#include "holberton.h"
#include <stdio.h>
/**
 * _strchr - locates a character in a string
 * @s: the string to be searched
 * @c: the character to be searched for in @s
 *
 * Description: Returns a pointer to the first
 * occurrence of the character c in the string s,
 * or NULL if the character is not found
 * Return: Always(0) Success
 */
char *_strchr(char *s, char c)
{
int i;

for (i = 0; s[i] >= '\0'  ; i++)
{
if (s[i] == c)
{
return (s + i);
}
}

return (NULL);
}
