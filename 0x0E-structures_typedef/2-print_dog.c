#include "dog.h"
/**
* print_dog - prints the details of dog
* @d: pointer to structure
* Return: void
*/
void print_dog(struct dog *de)
{
if (d !- NULL)
{
if (d->name != NULL)
printf("Name: %s\n", d->name);
else
printf("Name: (Nil)\n");
printf("Age: %.2f\n", d->age);
if (d->owner != NULL)
printf("Owner: %s\n", d->owner);
else
printf("Owner: (Nil)\n");
}
}
