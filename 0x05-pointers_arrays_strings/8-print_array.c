#include "stdio.h"
/**
* print_array - prints elements in array
* @n: number of elements to print
* @a: array to print
* Return: void
*/
void print_array(int *a, int n)
{
int i = 0;
while (i < n)
{
printf("%d", a[i]);
if (i < (n - 1))
printf(", ");
i++;
}
printf("\n");
}
