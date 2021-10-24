
#include <stdio.h>
#include <stdlib.h>
/**
*main- Main contains nested loop
*Return: Always 0 success
*/
int main(void)
{
int t;
for (t = 48; t < 58; t++)
{
putchar(t);
if (t != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
