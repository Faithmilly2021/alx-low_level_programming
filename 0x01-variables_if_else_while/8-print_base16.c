
#include <stdio.h>
#include <stdlib.h>
/**
*main- Main have loop to print out base16
*Return: Return 0 success
*/
int main(void)
{
int k;
char ch;
for (k = 48; k < 58; k++)
{
putchar(k);
}
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
