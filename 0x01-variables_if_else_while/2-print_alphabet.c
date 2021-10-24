#include <stdio.h>
#include <ctype.h>
/**
*main-Main should contain putchar and a variable
*Return:return 0 success
*/

int main(void)
{
int x;

for (x = 'A'; x <= 'Z'; x++)
{
putchar(tolower(x));
}
putchar('\n');
return (0);
}
