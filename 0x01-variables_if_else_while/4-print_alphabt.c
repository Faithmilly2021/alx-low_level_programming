
#include <stdio.h>
#include <stdlib.h>
/**
*main- Main has char data type
*Return: return 0 success
*/

int main(void)
{
char ch = 'a';

while (ch <= 'z')
{
if (ch != 'e' && ch != 'q')
{
putchar(ch);
}
ch++;
}
putchar('\n');
return (0);
}
