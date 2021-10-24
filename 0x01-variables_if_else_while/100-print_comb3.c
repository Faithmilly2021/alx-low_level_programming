
#include <stdio.h>
#include <stdlib.h>
/**
*main- Main contain statement and loop
*Return: return 0;
*/
int main(void)
{
int x, m;
for (x = 48; x <= 56; x++)
{
for (m = 49; m <= 57; m++)
{
if (m > x)
{
putchar(x);
putchar(m);
if (x != 56 || m != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
