#include "holberton.h"

/**
 * *_strpbrk - main function
 * @s - pointer to the string to be searched
 * @accept: pointer to set of bytes to be found
 *
 * Decription: this functions searche out a string of set of byte
 *
 * return: a pointer to the byte in s that matches one of
 *the bytes in accept or Null if nno such byte is found
 */

char *_strpbrk(char *s, char *accept)

{
int i;

while(*s)
{
for (i = 0; accept[i]; i++)
{
if (accept[i] == *s)
{
return (s);
}
}
s++;
}
return (NULL);
}
       
