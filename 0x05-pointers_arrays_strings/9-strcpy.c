#include "main.h"
/**
* _strcpy - copy string from source to destination
* @src: source of string
* @dest: the destination of copy
* Return: the destination of copy
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (*(src + i))
{
*(dest + i) = *(src + i);
i++;
}
*(dest + i) = '\0';
return (dest);
}
