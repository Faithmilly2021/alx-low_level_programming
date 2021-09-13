#include "main.h"
#include <stdio.h>
/**
* reverse_array - print array in reverse
* @a: integer to reverse
* @n: an integer
* Return: void
*/
void reverse_array(int *a, int n)
{
int i = 0, k;
n = n - 1;
while (i < n)
{
k = *(a + i);
*(a + i) = *(a + n);
*(a + n) = k;
i++;
n--;
}
}
