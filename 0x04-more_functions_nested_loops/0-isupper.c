#include "main.h"
#include <stdio.h>
/**
* _isupper - Entry point
* @c: Data type checked
* Desc: A program to check for uppercase letter
* Return: 0 or 1
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
