
#include <stdio.h>
#include <stdlib.h>
/**
*main- Main have the variable
*Return: Return 0 success
*/

int main(void)
{
int x;
for (x = 0; x < 10; x++)
{
printf("%d", x % 10);
}
printf("\n");
return (0);
}
