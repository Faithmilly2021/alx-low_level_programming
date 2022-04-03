#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - entry point
* Description: prints the number 1 to 100 with Fizz for multiples of 3
* Buzz for multiples of 5 and FizzBuzz for both
* Return: always 0 success
*/
int main(void)
{
int s;
for (s = 1; s <= 100; s++)
{
if (s % 15 == 0)
printf("FizzBuzz");
else if (s % 3 == 0)
printf("Fizz");
else if (s % 5 == 0)
printf("Buzz");
else
printf("%i", s);
if (s < 100)
printf(" ");
}
printf("\n");
return (0);
}
