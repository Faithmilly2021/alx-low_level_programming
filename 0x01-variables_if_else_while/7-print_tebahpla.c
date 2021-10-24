
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
*main- Main have a for loop that reverse
*Return: return 0 success
*/

int main(void)
{
int x;
for (x = 'Z'; x >= 'A'; x--)
{
putchar(tolower(x));
}
putchar('\n');
return (0);
}
