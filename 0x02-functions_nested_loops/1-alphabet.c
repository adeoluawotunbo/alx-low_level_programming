#include "main.h"

/**
 * print_alphabet - prints  all alphabet in lowercase with new line.
 *
 * Return: Always 0 on sucess.
 */

void print_alphabet(void)
{
char alphabets;

for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
{
_putchar(alphabets);
}
_putchar('\n');
}
