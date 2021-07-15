#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a new string which is
 * a duplicate of the string str
 * @str: string to be duplicated
 *
 * Description: a function that returns a pointer to a
 * newly allocated space in memory, which contains a
 * copy of the string given as a parameter.
 * Return: If str == NULL, Otherwise, return
 * a pointer to the duplicated string
 */

char *_strdup(char *str)
{
char *duplicate;
int i, len = 0;

if (str == NULL)
{
return (NULL);
}
for (i = 0; str[i]; i++)
{
len++;
}
duplicate = malloc(sizeof(char) * (len + 1));

if (duplicate == NULL)
{
return (NULL);
}
for (i = 0; str[i]; i++)
{
duplicate[i] = str[i];
}
duplicate[len] = '\0';
return (duplicate);
}
