
#include <stdio.h>
#include <stdlib.h>
/**
*main- Main must have a putchar function
*Return: return 0 success
*/

int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar((i % 10) + '0');
}
putchar('\n');
return (0);
}
