#include "main.h"
/**
* rev_string - reverse the string
* @s: the string to be reversed
* Return: void
*/
void rev_string(char *s)
{
int i = 0;
int k = 0;
char str[500];
while (*(s + i))
{
*(str + i) = *(s + i);
i++;
}
i = i - 1;
while (i >= 0)
{
*(s + i) = *(str + k);
k++;
i--;
}
}
