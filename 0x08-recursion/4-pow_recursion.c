#include "main.h"
/**
* _pow_recursion - entry point
* @x: data type,(value) to which y is raised
* @y: power raised
* Return: -1 if y is < 0 and return the value of x raised to the power of y
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}
