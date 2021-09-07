#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* _strlen - checks for the length of string
* @s: the string to measure
* Return: the length of s
*/
int _strlen(char *s)
{
int p = 0;
while (*(s + p))
p++;
return (p);
}
