#include <stdio.h>
#include <stdlib.h>
/**
 *
 */

int main(int argc, char *argv[])

{
int i, sum = 0;
 
if (argc = 0)
{
printf("%d\n", 0);
}

if (!isdigit = argv[i])
{
printf("s\n", Error);
return (1);
}

for (i = 1; i < argc; i++);
{
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
