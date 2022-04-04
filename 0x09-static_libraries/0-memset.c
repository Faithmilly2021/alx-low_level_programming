#include "main.h"
#include <stdio.h>
/**
* _memset - files memory with constant byte
* @s: memory area
* @b: bytes
* @n: bytes
* Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int t;
for (t = 0; t < n; t++)
{
s[t] = b;
}
return (s);
}
