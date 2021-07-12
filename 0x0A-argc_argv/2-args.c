#include <stdio.h>

/**
 * main - the main function
 * @argc: arguement count
 * @argv: arguement array
 *
 * Description: prints all arguement it receives;
 * printing only one arguement per line.
 * Return: Always(0) Success
 */

int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
