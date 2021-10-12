#include "lists.h"
#include <stdio.h>
/**
* listint_len - a function that check the number of elements in list
* @h: a pointer to access the elements
* Return: The number of elements in the list
*/
size_t listint_len(const listint_t *h)
{
size_t count = 0;
while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
