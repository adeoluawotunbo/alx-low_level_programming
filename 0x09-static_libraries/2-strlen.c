#include "holberton.h"
/**
 * _strlen - return the length of a string
 * @s : The pointer parameter
 *
 * The  strlen()  function calculates the length
 * of the string pointed to by s, excluding the
 * terminating null byte ('\0').
 * Return: length of the string
 */

int _strlen(char *s)
{
char *str;
int len = 0, i = 0;

str = s;

while (str[i] != '\0')
{
len++;
i++;
}
return (len);
}
