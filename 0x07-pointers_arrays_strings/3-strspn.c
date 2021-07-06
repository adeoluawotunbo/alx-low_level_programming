#include "holberton.h"

/**
 * _strspn - the main function.
 * @s: pointer to the character to print.
 * @accept: pointer to the character to print
 *
 *description: this functions gets the length of a prefix substring
 *Return: the number of bytes in the initial segment of *s which
 * consists only of bytes from  pinter accept
 */

unsigned int _strspn(char *s, char *accept)

{
unsigned int i = 0, c, p = 0;

while (s[i])
{
for (c = 0; accept[c]; c++)
{
if (s[i] == accept[c])
{
p++;
}
}
if (p < i)
{
break;
}
i++;
}
return (p);
}
