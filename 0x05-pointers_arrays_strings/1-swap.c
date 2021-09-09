#include "main.h"
#include <stdio.h>
/**
* swap_int - entry point for code
* @a: data type to swap
* @b: data type to swap
* Return: void
*/
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
