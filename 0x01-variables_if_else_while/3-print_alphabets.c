
#include <stdio.h>
#include <ctype.h>
/**
*main- Main have code that out use putchar
*Return: return 0 success
*/

int main(void)
{
int x;
for (x = 'A'; x <= 'Z'; x++)
{
putchar(tolower(x));
}
for (x = 'a'; x <= 'z'; x++)
{
putchar(toupper(x));
}
putchar('\n');
return (0);
}
