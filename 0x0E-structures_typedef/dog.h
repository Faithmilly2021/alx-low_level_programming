#ifndef _DOG_H_
#define _DOG_H_

/**
* struct dog - a function which contain the details about dog
* @name: naame of dog
* @age: age of dog
* @owner: owner of dog
*/
struct dog
{
char *name;
float age;
char *owner;
};

/**
* dod_t - typedef for struct dog
*/

typedef struct dog dog_t;

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age; char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
