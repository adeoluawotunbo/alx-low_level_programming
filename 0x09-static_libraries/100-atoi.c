#include "holberton.h"
/**
 * _atoi - convert a string to an integer.
 * @s: the pointer to the string to be comverted.
 *
 * Description:  The  atoi() function converts the
 * initial portion of the string pointed to by s to int.
 * Return: The integer value of the string converted
 */

int _atoi(char *s)

{
int sign = 1;
unsigned int num = 0;

do {
if (*s == '-')
sign *= -1;

else if (*s >= '0' && *s <= '9')
num = (num * 10) + (*s - '0');

else if (num > 0)
break;

} 

while (*s++);

return (num * sign);
}
