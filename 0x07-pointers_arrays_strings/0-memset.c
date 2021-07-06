#include "holberton.h"

/**
 * *_memset - This is the main function
 * @s: pointer to the memory area too be filled
 * @b: The constant byte
 * @n: the number of bytes to be filled
 * Return: A pointer to the filled memory @s.
 */

char *_memset(char *s, char b, unsigned int n)
  
{
unsigned int i = 0;

while (i < n)

{
s[i] = b;
i++;
}
    
return (s);
}
