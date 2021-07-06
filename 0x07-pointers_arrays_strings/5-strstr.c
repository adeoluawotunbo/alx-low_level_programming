#include "holberton.h"

/**
 * *_strstr - main function
 * @haystack: pointer to the string to search
 * @needle: pointer to the substring to find
 *
 * description: this function locates a  sub string
 *
 * Return: A pointe to the beginning of the located substring
 *or Null if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
int i = 0;
  
while (needle[i])
{
while (*haystack)
{
if (*haystack == needle[i])
{
return (haystack);
}
haystack++;
}
if (needle == 0 || *needle == '\0')
{
return (0);
}
i++;
}
return (NULL);
}
