#include "holberton.h"

/**
 * _strlen - returns the length of a tring
 * @s: the string whose length is returned
 * Return: length of the string
 */

int _strlen(char *s)
{
int i = 0;
while (*s != '\0')
{
i++;
s++;
}
return (i);
}
