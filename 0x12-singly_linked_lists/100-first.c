#include <stdio.h>

void print_something(void) __attribute__ ((constructor));

/**
 * print_something - prints sets of characters before the main.
 */

void print_something(void)
{
printf
("You're beat! and yet, you must allow,\nI bore my house upon my back!\n")
;
}
