#include <stdlib.h>
#include "holberton.h"

/**
 * _strlen - finds the length of a string
 * @s: string.
 * Return: String.
 */

int _strlen(char *s)

{
int i;

for (i = 0; s[i] != '\0'; i++)
		;
return (i);
}

/**
 * string_nconcat - concatenate two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: bytes for s2 to use.
 * 
 * Return: Only both strings.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
unsigned int i, a, b;
char *c;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}

a = _strlen(s1);
b = _strlen(s2);

if (n >= b)
n = b;

c = malloc(sizeof(char) * (a + n + 1));
if (c == NULL)
return (NULL);

for (i = 0; i < a; i++)
c[i] = s1[i];
for (; i < a + n; i++)
c[i] = s2[i - a];
c[a + n] = '\0';

return (c);
}
