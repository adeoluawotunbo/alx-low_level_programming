#include <stdio.h>
#include <stdlib.h>
/**
 * main - the main function
 * @argc: arguement count
 * @argv: arguement array
 *
 * Description: prints the result of the
 * multiplication of two numbers, followed 
 * by a new line
 * Return: If the program does not
 * receive two arguments, return 1 otherwise 0
 */

int main(int argc, char *argv[])
{
char error[9] = "Error";

if (argc != 3)
{
printf("%s\n", error);
return (1);
}

printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

return (0);
}

