#include "holberton.h"

/**
 * main - prints name followed by a new line
 * @argc: Number of arguement
 * @argv: Array of the arguements
 *
 * Description: prints name followed by a new line
 * Return: Always (0) for sucess
 */

int main(int argc, char *argv[])

{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[0]);
}
return (0);
}

