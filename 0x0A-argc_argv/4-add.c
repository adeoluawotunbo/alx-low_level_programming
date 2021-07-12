#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints sum of any numbers upto infinity
 * @argc: arguement count
 * @argv: arguement arrays
 * 
 * Description: prints sum of any numbers up
 * to infinity
 * Return: return 1 for error otherwise 0
 */

int main(int argc, char *argv[])

{

int i;
int sum;

if (argc == 1)

{
printf("%d\n", 0);
return (0);
}
for (i = 0; i < argc; i++)
{
if (i > 0)
{
if (atoi(argv[i]) == 0)
{
printf("%s\n", "Error");
return (1);
}
sum += atoi(*(argv + i));
}
}
printf("%d\n", sum);
return (0);
}
