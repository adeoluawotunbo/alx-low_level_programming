#include "holberton.h"

/**
 * _memset.c - this is the main function
 *@s - this is the pointer to the area to be filled
 *@b - this fills the memoey area
 *@n - this is number of bytes that will be filled in the
 *memory area pointed to @s
 *
 * Return : the pointer s is to be returned
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
