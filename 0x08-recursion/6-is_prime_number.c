#include "main.h"
/**
 * check_prime - checks for prime number
 * @i: number to check
 * @j: another number
 * Return: 1 if number is prime else 0
 *
 */
int check_prime(int i, int j)
{
if (i < 2 || i % j == 0)
return (0);
else if (i > j / 2)
return (1);
else
return (check_prime(i + 1, j));
}
/**
* is_prime_number - checks for prime number
* @n: number to check
* Return: 1 if the number is prime else 0
*/
int is_prime_number(int n)
{
if (n == 2)
return (1);
return (check_prime(2, n));
}
