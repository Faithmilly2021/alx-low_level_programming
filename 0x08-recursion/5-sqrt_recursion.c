#include "main.h"
/**
* sqrt_check - check square root
* @i: number to square
* @j: number to find root
*
* Return: -1 if number is not natural square root.
*/
int sqrt_check(int i, int j)
{
if (i * i == j)
return (i);
if (i * i > j)
return (-1);
return (sqrt_check(i + 1, j));
}
/**
* _sqrt_recursion - returns square root of a natural number
* @n: number to check
* Return: -1 if number is not natural square root.
*/
int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
return (sqrt_check(1, n));
}
