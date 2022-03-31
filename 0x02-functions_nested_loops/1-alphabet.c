#include "main.h"
/**
*print_alphabet - entry point
*Description: prints the alphabet with _putchar
*Return: void
*/
void print_alphabet(void)
{
char x;
for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
_putchar('\n');
}
