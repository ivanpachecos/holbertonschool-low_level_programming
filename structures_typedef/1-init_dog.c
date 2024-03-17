#include "dog.h"
#include <stdlib.h>
/**
  * init_dog - initialize a variable of type struct dog
  *
  * @d: reserved structure in memory
  * @name: of the dog
  * @age: of the dog
  * @owner: your dog
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
