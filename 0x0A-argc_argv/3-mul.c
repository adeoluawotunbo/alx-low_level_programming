#include <stdio.h>

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
int i;
int num1, num2, mul;
char error = "Error";

if (argc != 3)
{
printf("%s\n", error);
return (1);
}

while (i < argc)
{
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
i++;
}
mul = num1 * num2;
printf("%d\n", mul);

return (0);
}

