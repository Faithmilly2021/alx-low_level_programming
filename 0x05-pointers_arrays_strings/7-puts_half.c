#include "main.h"
/**
* puts_half - print half of string
* @str: string to print
* Return: void
*/
void puts_half(char *str)
{
int a, b = 0;
while (*(str + b))
b++;
a = b / 2;
if (b % 2)
a += 1;
while (a < b)
{
_putchar(*(str + a));
a++;
}
_putchar('\n');
}
