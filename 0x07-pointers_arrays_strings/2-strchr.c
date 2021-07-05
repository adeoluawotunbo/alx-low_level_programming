
#include "holberton.h"

/**
 * *_strchr - main function
 * @s: Pointer to the string
 * @c: character to locate in the string
 *
 * Description: This function locates a character in A  string
 *
 *Return: a pointer to tthe first occurence of the character c
 *in the string s, or null if the haracter is nott found
 */

char *_strchr(char *s, char c)
{
while (*s)
{
if (*s == c)
{
return (s);
}
s++;
}
return (!c ? s : NULL);
}
