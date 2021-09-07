#include "main.h"
/**
* _puts - it put the string on stdout
* @str: teh string to be printed
* Return: nothing
*/ 
void _puts(char *str)
{
int i = 0;
while (*(str + i))
{
_putchar(*(str + i));
i++;
}
_putchar('\n');
}
