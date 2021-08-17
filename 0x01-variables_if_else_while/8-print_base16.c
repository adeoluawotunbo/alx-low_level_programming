#include <stdio.h>

/**
 * main - a program that prints all the numbers of base 16 in
 * lowercase, followed by a new line.
 *
 * Return: 0 on sucess.
 */

int main(void)
{
char c;
int i;
for (i = 0; i < 10; i++)
{
putchar(i + '0');
}
for (c = 'a'; c < 'g'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
